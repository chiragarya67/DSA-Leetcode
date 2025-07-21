#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                nums3.push_back(nums1[i++]);
            } else if (nums1[i] > nums2[j]) {
                nums3.push_back(nums2[j++]);
            } else {
                nums3.push_back(nums1[i++]);
                nums3.push_back(nums2[j++]);
            }
        }

        while (i < m) nums3.push_back(nums1[i++]);
        while (j < n) nums3.push_back(nums2[j++]);

        for (int k = 0; k < m + n; ++k) {
            nums1[k] = nums3[k];
        }
    }
};

int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0}; 
    vector<int> nums2 = {2, 4, 6};          
    int m = 3, n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
