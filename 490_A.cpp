#include <iostream>
#include <vector>

using namespace std;

int min_of_three(int s1, int s2, int s3){
	int counter = 0;
	while (s1 && s2 && s3) {
		s1--;
		s2--;
		s3--;
		counter++;
	}
	return counter;
}
int main() {
	int n;
	cin >> n;

	vector <int> students(n);
	vector <int> programming_index{}, math_index{}, PE_index{};

	for (int i = 0; i < n; i++) {
		cin >> students[i];
	}

	for (int i = 1; i <= n; i++) {
		if (students[i - 1] == 1) {
			programming_index.push_back(i);
		}
		else if (students[i - 1] == 2) {
			math_index.push_back(i);
		}
		else {
			PE_index.push_back(i);
		}
	}

	// minimum number of teams is mimimum between the 3 subjects
	int s1 = programming_index.size();
	int s2 = math_index.size();
	int s3 = PE_index.size();
	int num_of_teams = min_of_three(s1, s2, s3 );

	cout << num_of_teams << endl;

	for (int i = 0; i < num_of_teams; i++) {
		cout << programming_index[i] << " " << math_index[i] << " " << PE_index[i] << endl;
	}
}