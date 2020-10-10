#include <iostream>
#include <vector> 

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<short> actions(n);

	for (int i = 0; i < n; i++) {
		cin >> actions[i];
	}

	int free_officers{}, untreated_crimes{};

	for (int i = 0; i < n; i++) {
		if (actions[i] > 0) {
			free_officers += actions[i];
		}
		
		if (actions[i] == -1) {
			if (free_officers > 0) {
				free_officers--;
			}
			else {
				untreated_crimes++;
			}
		}
	}

	cout << untreated_crimes << endl;
}