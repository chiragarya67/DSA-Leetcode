 #include <iostream>
 #include <vector>
 using namespace std;


    int main () {
       vector<int> nums = {4, 2, 7, 6, 5, 1};
        int n = nums.size();
    
        for(int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
        for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    }

