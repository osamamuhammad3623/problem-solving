//http://codeforces.com/contest/677/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, h;
	cin >> n >> h;

	int width = 0;

	vector<int> heights(n);
	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}

	for (int i = 0; i < n; i++) {
		if (heights[i] > h) {
			width += 2;
		}
		else {
			width++;
		}
	}

	cout << width;
}