// http://codeforces.com/contest/791/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int years{};

	while ( !(a > b) ) {
		a *= 3;
		b *= 2;
		years++;
	}

	cout << years;
}