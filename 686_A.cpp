#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	long long int x;
	cin >> n >> x;
	
	int children_in_distress{};
	for (long long int i = 0; i < n; i++) {
		char action;
		long long int number;
		cin >> action >> number;
		if (action == '+') {
			x += number;
		}
		if (action == '-') {
			if (number > x) {
				children_in_distress++;
			}
			else {
				x -= number;
			}
		}
	}

	cout << x <<" " << children_in_distress << endl;
}