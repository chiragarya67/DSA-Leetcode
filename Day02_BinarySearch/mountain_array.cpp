// ✅ LC 852: Peak Index in a Mountain Array
// 🔗 https://leetcode.com/problems/peak-index-in-a-mountain-array/
// 🧠 Approach: Binary Search - Compare mid with mid+1
// ⏱️ Time: O(log n), Space: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[mid + 1]) {
                high = mid; // Peak is at mid or to the left
            } else {
                low = mid + 1; // Peak is to the right
            }
        }
        return low; // low == high at the peak index
    }
};
