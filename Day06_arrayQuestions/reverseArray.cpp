#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 1, 6, 3};
    int s = 0;
    int e = arr.size()-1;

    while(s < e) {
        swap(arr[s++], arr[e--]);
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}