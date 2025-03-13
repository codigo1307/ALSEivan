#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int const longitud = nums.size();
        for(int i = 0; i < longitud - 1; i++){
            for (int j = i + 1; j < longitud; j++){
                if (nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(int, char **)
{
    cout << "Hello\n";
    Solution mySol;
    vector<int> myVec = {0, 1, 5, 2, 3, 4, 6, 8};
    vector<int> result = mySol.twoSum(myVec, 5);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << "\n";
    } else {
        cout << "No solution found\n";
    }

    return 0;
}