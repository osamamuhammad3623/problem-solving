#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// sorting the laptops by price
// note: to know why sorting is important, remove line 24 and re-submit
bool sortcol(const vector<int>& v1, const vector<int>& v2) {
	return v1[0] < v2[0];
}


int main() {

	int n;
	cin >> n;
	vector<vector<int>> laptops(n, vector<int> (2));

	for (int i = 0; i < n; i++) {
		cin >> laptops[i][0] >> laptops[i][1];
	}

	sort(laptops.begin(), laptops.end(), sortcol);

	int current_price = laptops[0][0];
	int current_quality = laptops[0][1];
	for (int i = 0; i < n; i++) {
		if (current_price < laptops[i][0] && current_quality > laptops[i][1]) {
			cout << "Happy Alex" << endl;
			return 0;
		}
		current_price = laptops[i][0];
		current_quality = laptops[i][1];
	}

	cout << "Poor Alex" << endl;
}