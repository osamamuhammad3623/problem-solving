#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector <int> calory_per_square(4);
	for (int i = 0; i < 4; i++) {
		cin >> calory_per_square[i];
	}

	string taps;
	cin >> taps;

	vector<int> square_counter = { 0,0,0,0 };

	for (int i : taps) {
		if (i == '1') {
			square_counter[0]++;
		}
		if (i == '2') {
			square_counter[1]++;
		}
		if (i == '3') {
			square_counter[2]++;
		}
		if (i == '4') {
			square_counter[3]++;
		}
	}

	int total_calories{};
	for (int i = 0; i < 4; i++) {
		total_calories += (calory_per_square[i] * square_counter[i]);
	}

	cout << total_calories << endl;
}