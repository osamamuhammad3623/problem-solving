#include <iostream>
#include <string>

using namespace std;

short steps_counter(char start, char end) {

	short steps{};
	// in case of clockwise:
	if (end > start) {
		steps = char(end - start);
		// if steps > 13 --> then I should count it counter clockwise:
		if (steps > 13) {
			return abs(26 - steps);
		}
	}
	// in case of counter clockwise:
	else {
		steps = char(start - end);
		// if steps > 13 --> then I should count it clockwise:
		if (steps > 13) {
			return abs(26 - steps);
		}

	}

	return steps;
}


int main() {
	string name;
	cin >> name;

	char current_letter = 'a';
	int steps{};

	for (short i = 0; i < name.size(); i++) {
		steps += steps_counter(current_letter, name[i]);
		current_letter = name[i];
	}

	cout << steps << endl;
}