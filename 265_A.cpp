#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, t;
	cin >> s;
	cin >> t;

	short pos = 1;

	for (short i=0; i < t.size(); i++) {
		if (s[pos-1] == t[i]) {
			pos++;
		}
	}

	cout << pos << endl;
}