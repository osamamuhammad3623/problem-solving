#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	deque<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	int S { }, D { };
	int cnt = 0;
	while (num.size() > 0) {
		if (cnt % 2 == 0) {
			// S turn
			if (num[0] > num[num.size() - 1]) {
				S += num[0];
				num.pop_front();
			} else {
				S += num[num.size() - 1];
				num.pop_back();
			}
		} else {
			// D turn
			if (num[0] > num[num.size() - 1]) {
				D += num[0];
				num.pop_front();
			} else {
				D += num[num.size() - 1];
				num.pop_back();
			}
		}
		cnt++;
	}

	cout << S << " " << D;
}
