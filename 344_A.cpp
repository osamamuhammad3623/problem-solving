#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int groups{ 1 }; // at least there will be 1 group

	string current_poles;
	cin >> current_poles;
	for (int i = 0; i < n-1; i++) {
		string next_poles;
		cin >> next_poles;
		if (current_poles != next_poles) {
			// when this statement is true, then magnets repelled, i.e. 10 then 01
			// means a negative pole is placed next to a negative pole
			groups++;
		}

		// changing the status of the last poles
		current_poles = next_poles;
	}

	cout << groups << endl;
}