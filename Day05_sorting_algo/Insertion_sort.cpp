#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 2, 7, 6, 5, 1};
    int n = arr.size();
    int temp;

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        int j = i - 1;

        // Shift elements that are greater than temp
        while (j >= 0) {
            if(arr[j] > temp) {
            arr[j + 1] = arr[j];
            }
            else {
                break;
            }
            j--;
        }

        arr[j + 1] = temp;
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
