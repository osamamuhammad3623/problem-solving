#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, b, d;
	cin >> n >> b >> d;

	vector<int> oranges(n);
	for (int i = 0; i < n; i++) { cin >> oranges[i]; }

	int waste{};
	int empty_the_waste{};

	for (int i = 0; i < n; i++) {

		if (oranges[i] > b) {
			continue;
		}
		else {
			waste += oranges[i];
			if (waste > d) {
				empty_the_waste++;
				waste = 0;
			}
		}
	}

	cout << empty_the_waste << endl;
}