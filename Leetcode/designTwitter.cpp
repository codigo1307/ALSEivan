#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

/**
 * @class Twitter
 * @brief Simula una red social donde los usuarios pueden publicar tweets, seguir a otros usuarios y obtener un feed de noticias.
 * 
 * Esta clase permite realizar operaciones como publicar tweets, seguir y dejar de seguir a otros usuarios,
 * y obtener un feed con los 10 tweets más recientes de un usuario y las personas que sigue.
 */
class Twitter {
private:
    int timestamp; ///< Controla el tiempo de publicación de los tweets.
    unordered_map<int, unordered_set<int>> following; ///< Relación de usuarios seguidos por cada usuario.
    unordered_map<int, vector<pair<int, int>>> tweets; ///< Tweets de cada usuario, almacenados como pares (timestamp, tweetId).

public:
    /**
     * @brief Constructor de la clase Twitter.
     * 
     * Inicializa el timestamp en 0.
     */
    Twitter() : timestamp(0) {}

    /**
     * @brief Publica un tweet para un usuario.
     * 
     * @param userId ID del usuario que publica el tweet.
     * @param tweetId ID del tweet a publicar.
     */
    void postTweet(int userId, int tweetId) {
        tweets[userId].emplace_back(timestamp++, tweetId);
    }

    /**
     * @brief Obtiene el feed de noticias de un usuario.
     * 
     * @param userId ID del usuario que solicita el feed.
     * @return Vector con los IDs de los 10 tweets más recientes en el feed.
     */
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> feed;

        // Agregar tweets del propio usuario
        for (const auto& tweet : tweets[userId]) {
            feed.push(tweet);
        }

        // Agregar tweets de usuarios seguidos
        for (int followeeId : following[userId]) {
            for (const auto& tweet : tweets[followeeId]) {
                feed.push(tweet);
            }
        }

        vector<int> result;
        for (int i = 0; i < 10 && !feed.empty(); ++i) {
            result.push_back(feed.top().second);
            feed.pop();
        }

        return result;
    }

    /**
     * @brief Permite que un usuario siga a otro.
     * 
     * @param followerId ID del usuario que desea seguir a otro.
     * @param followeeId ID del usuario a seguir.
     */
    void follow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            following[followerId].insert(followeeId);
        }
    }

    /**
     * @brief Permite que un usuario deje de seguir a otro.
     * 
     * @param followerId ID del usuario que desea dejar de seguir a otro.
     * @param followeeId ID del usuario a dejar de seguir.
     */
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

int main() {
    Twitter twitter;

    // Usuario 1 publica un tweet con ID 5
    twitter.postTweet(1, 5);

    // Usuario 1 obtiene su feed de noticias
    vector<int> feed = twitter.getNewsFeed(1);
    cout << "Feed de Usuario 1: ";
    for (int tweet : feed) {
        cout << tweet << " ";
    }
    cout << endl;

    // Usuario 1 sigue al Usuario 2
    twitter.follow(1, 2);

    // Usuario 2 publica un tweet con ID 6
    twitter.postTweet(2, 6);

    // Usuario 1 obtiene su feed de noticias nuevamente
    feed = twitter.getNewsFeed(1);
    cout << "Feed de Usuario 1 después de seguir al Usuario 2: ";
    for (int tweet : feed) {
        cout << tweet << " ";
    }
    cout << endl;

    // Usuario 1 deja de seguir al Usuario 2
    twitter.unfollow(1, 2);

    // Usuario 1 obtiene su feed de noticias nuevamente
    feed = twitter.getNewsFeed(1);
    cout << "Feed de Usuario 1 después de dejar de seguir al Usuario 2: ";
    for (int tweet : feed) {
        cout << tweet << " ";
    }
    cout << endl;

    return 0;
}