#include <iostream>
#include <vector>
using namespace std;

bool isPossible (vector <int>& wall, int mid, int n, int p ){
   int painter = 1;
   int wallsum = 0;

   for( int i = 0; i < n; i++) {
    if (wallsum + wall[i] <= mid) 
    {
       wallsum += wall[i];
    }
    else {
        painter ++;
        if(painter > p || wall[i] > mid ){
           return false;
        }
        wallsum = wall[i];
    }
    
   }
   return true;
}

int main () {
   vector <int> wall = {5 ,5, 5, 5};
   int s = 0;
   int p = 2;
   int total = 0;
   int ans = 0;
   int n = wall.size();

   for(int i = 0; i < n; i++) {
      total += wall[i];
   }
    
  int e = total;

  int mid = s + (e - s) / 2;

  while(s <= e) {
    if(isPossible(wall, mid, n, p)) {
        ans = mid;
        e = mid - 1;
    }
    else {
        s = mid + 1;
    }
     mid = s + (e - s) / 2; 
  }
    
     cout << ans ;
}