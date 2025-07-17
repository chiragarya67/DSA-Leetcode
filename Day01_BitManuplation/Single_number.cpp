#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            ans ^= val;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 5, 2, 3};
    cout << "The single number is: " << sol.singleNumber(nums) << endl;
    return 0;
}
