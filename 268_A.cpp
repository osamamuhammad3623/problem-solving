#include <iostream>
#include <vector>
using namespace std;

int main() {

	short n;
	cin >> n;

	vector <vector<short>> colors(n, vector<short>(2));
	for (short i = 0; i < n; i++) {
		cin >> colors[i][0] >> colors[i][1];
	}

	short matching{};

	for (short home = 0; home < n; home++) {
		for (short away = 0; away < n; away++) {
			// check if home team color is the same as guest team color
			if (colors[home][0] == colors[away][1]) {
				matching++;
			}
		}
	}

	cout << matching << endl;
}