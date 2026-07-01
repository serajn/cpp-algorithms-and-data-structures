# include <iostream>
# include <vector>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int index_1 = 0;
            int index_2 = numbers.size() - 1;
            
            while (index_1 != index_2) {
                int sum = numbers[index_1] + numbers[index_2];

                if (sum == target) {
                    return {index_1 + 1, index_2 + 1};
                }

                if (sum < target) {
                    index_1++;
                }
                else {
                    index_2--;
                }
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