#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
   int student = 1;
   int pagesum = 0;
   
   for(int i = 0; i < n; i ++) {
    if(pagesum + arr[i] <= mid)
    {
        pagesum += arr[i];
    }
     else {
        student ++;
        if (student > m || arr[i] > mid ) {
            return false;
        }
        pagesum = arr[i];
     }
   }
    return true;
}

int main () {
    vector <int> arr = {10 , 20, 30 ,40};
    int m = 2;
    int n = arr.size();
  // start the main code 
    int s = 0;
    int sum = 0;
    int ans = -1;
    
    for(int i = 0; i < n; i ++) {
        sum += arr[i];
    }
    
    int e = sum;

    int mid = s + (e - s) / 2;
   
      while ( s <= e ) {
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
         else {
            s = mid + 1;
         }
         mid = s + (e - s) / 2; 
      }
       cout << ans;
}