#include <iostream>
#include <string>

using namespace std;

int maximum(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {

	int y, w;
	cin >> y >> w;


	int max_num = maximum(y, w);

	string probabilities[6] = {"1/6","1/3","1/2","2/3","5/6","1/1"};

	cout << probabilities[6 -max_num] << endl;

}