#include <iostream>
#include <vector>
using namespace std;

int main() {

	short n;
	cin >> n;

	vector <short> cubes(n);
	for (short i = 0; i < n; i++) {
		cin >> cubes[i];
	}

	for (short j = 0; j < n - 1; j++) {
		for (short i = 0; i < n - 1; i++) {
			// if a column has more cubes than the next column, the extra cubes are moved to the next column
			short difference = cubes[i] - cubes[i + 1];
			// if the difference between 2 columns is > 0, then the first column has extra cubes, 
			// which are moved to the next column
			if (difference > 0) {
				cubes[i] -= difference;
				cubes[i + 1] += difference;
			}
		}
	}

	for (short itr : cubes) {
		cout << itr << " ";
	}

}