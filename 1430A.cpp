#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		int n_appartments = 0; // to determine if no appartments are found
		for (int f = 0; f < 100; f++) {
			for (int s = 0; s < 100; s++) {
				for (int th = 0; th < 100; th++) {
					int counted_windows = 3 * f + 5 * s + 7 * th;
					if (counted_windows == n) {
						cout << f << " " << s << " " << th << endl;
						n_appartments++;
						goto NextTest; // exit from all loops to go to next testcase
					}
					// to save some loops:
					if (counted_windows > n) {
						break;
					}
				}
			}
		}
		if (n_appartments == 0) {
			cout << -1 << endl;
		}
	NextTest:
		continue;
	}
}