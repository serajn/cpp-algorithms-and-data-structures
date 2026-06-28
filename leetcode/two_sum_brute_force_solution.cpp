# include <iostream>
# include <vector>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {

        }
};


int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}