 #include <iostream>
 #include <vector>
 using namespace std;

int main() {
       vector<int> nums = {4, 2, 7, 6, 5, 1};
       int n = nums.size();
       
        for(int i = 1; i < n; i ++) {    // round 
         bool swapped = false;
        for (int j = 0; j < n-i; j ++) {
           if(nums[j] > nums[j + 1]) {
            swap(nums[j], nums[j+1]);
            swapped = true;
           }
        } 
          if (swapped == false) {
            break;
          } 
     }
      for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
       
    }

