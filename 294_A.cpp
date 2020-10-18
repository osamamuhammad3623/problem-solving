#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector <int> birds_on_line(n);
	for (int i = 0; i < n; i++) { cin >> birds_on_line[i]; }

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;

		x = x - 1; // to be 0-based (not 1-based)

		int left_birds = y-1;
		int right_birds = birds_on_line[x] - y;

		birds_on_line[x]= 0;

		if (x != 0) {
			birds_on_line[x - 1] += left_birds;
		}
		if (x != (n - 1)) {
			birds_on_line[x + 1] += right_birds;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << birds_on_line[i] << endl;
	}
}