// ✅ LC 69: Sqrt(x)
// 🔗 https://leetcode.com/problems/sqrtx/
// 🧠 Approach: Binary Search on Answer
// ⏱️ Time: O(log x), Space: O(1)

class Solution {
public:
    int binarySearch(int n) {
        int s = 0, e = n;
        long long int mid, ans = -1;

        while (s <= e) {
            mid = s + (e - s) / 2;
            long long square = mid * mid;

            if (square == n) {
                return mid;
            } else if (square < n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }

    int mySqrt(int x) {
        return binarySearch(x);
    }
};
