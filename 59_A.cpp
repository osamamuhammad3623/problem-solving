#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	cin >> word;

	short size = word.size();

	int lowerCount{};
	int upperCount{};
	for (short i = 0; i < size; i++) {

		if (word[i] == tolower(word[i])) {
			lowerCount++;
		}
		else {
			upperCount++;
		}
	}

	if (lowerCount >= upperCount) {

		for (short i = 0; i < size; i++) {

			word[i] = tolower(word[i]);
		}
	}
	else {
		for (short i = 0; i < size; i++) {

			word[i] = toupper(word[i]);
		}
	}
	cout << word;
}