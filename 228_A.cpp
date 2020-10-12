#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <long long int> colors(4);
	for (int i = 0; i < 4; i++) {
		cin >> colors[i];
	}

	sort(colors.begin(), colors.end());

	int minimum{};
	for (int i = 0; i < 3; i++) {
		if (colors[i] == colors[i + 1]) {
			minimum++;
		}
	}

	cout << minimum << endl;
}