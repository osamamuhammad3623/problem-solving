/* Problem link:
https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, shifts;
    cin >> n >> shifts;
    vector <int> nums(n);
    for (int i = 0; i < n; i++) { cin >> nums[i]; }
    
    // we make a temp vector includes the elements that should be shifted
    vector <int> shifted(shifts);
    for (int i = 0; i < shifts; i++) { shifted[i] = nums[i]; }
    
    // then we remove those elements from the front
    nums.erase(nums.begin(), nums.begin() + shifts);

    // and add them in the back!
    for (int i = 0; i < shifts; i++) {
        nums.push_back(shifted[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

}
