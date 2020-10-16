#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<string> actions(n);

	for (int i = 0; i < n; i++) {
		cin >> actions[i];
	}
	// to distinguish the two teams, i'll assign team_1 to the first element
	string team_1 = actions[0];
	string team_2;
	int score_1{}, score_2{};

	for (int i = 0; i < n; i++) {
		if (actions[i] == team_1) {
			score_1++;
		}
		else {
			team_2 = actions[i];
			score_2++;
		}
	}

	if (score_1 > score_2) { cout << team_1 << endl; }
	else { cout << team_2 << endl; }
}