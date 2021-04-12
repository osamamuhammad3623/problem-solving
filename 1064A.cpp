#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    // sorted in increasing order

    if (arr[0] + arr[1] > arr[2]){
        cout << 0;
    }
    else{
        // time to make arr[0] + arr[1] > arr[2]
        cout << arr[2] - arr[1] - arr[0] +1;
    }
}
