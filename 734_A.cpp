// http://codeforces.com/contest/734/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	int anton{}, danik{};

	vector<char> games(n);
	for (int itr = 0; itr < n; itr++) { cin >> games[itr]; }

	for (int itr = 0; itr < n; itr++) {
		if (games[itr] == 'A') {
			anton++;
		}
		else {
			danik++;
		}
	}

	if (anton > danik) {
		cout << "Anton" << endl;
	}
	else if (anton < danik) {
		cout << "Danik" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}
}