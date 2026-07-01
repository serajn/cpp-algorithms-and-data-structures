# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
    public:
    
        unordered_map<int, int> mp;

        vector<int> twoSum(vector<int>& nums, int target) {
            for (int i = 0; i < nums.size(); i++) {

                int complement = target - nums[i];

                auto it = mp.find(complement);

                if (it != mp.end()) {
                    return {it->second, i};
                }

                mp[nums.at(i)] = i;
            }
            return {};
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