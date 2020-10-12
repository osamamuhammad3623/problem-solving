#include <iostream>

using namespace std;

int main() {
	int k, r;
	cin >> k >> r;
	
	int shovels = 1;
	int spent_money = k;

	// while money is't only 10-burle coins && last digit (most-right) is not r
	while ((spent_money % 10 != 0)&& (r != spent_money % 10)) {
		spent_money += k;
		shovels++;
	}

	cout << shovels << endl;
}