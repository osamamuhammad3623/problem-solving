#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> numbers(n);
	for (short i = 0; i < n; i++) { cin >> numbers[i]; }

	int S{}, D{};

	for (int i = 1; i <= n; i++) {

		int last_element = numbers.size() - 1;
		// in S turns:
		if (i % 2 == 1) {
			// if most left > most right --> update S score with the most left value, then delete it
			if (numbers[0] > numbers[last_element]) {
				S += numbers[0];
				numbers.erase(numbers.begin());
			}
			else {
				// if most right > most left
				S += numbers[last_element];
				numbers.erase(numbers.end()-1);
			}
		}
		// in D turns:
		else {
			if (numbers[0] > numbers[last_element]) {
				D += numbers[0];
				numbers.erase(numbers.begin());
			}
			else {
				D += numbers[last_element];
				numbers.erase(numbers.end()-1);
			}

		}		
	}

	cout << S << " " << D << endl;
}