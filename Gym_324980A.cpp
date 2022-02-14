#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n; cin >> n;
	int first, second, relations;
	cin >> first >> second;

	cin >> relations;
	vector<vector<int>> v (n+1);

	int a, b;
  /* building adjacency list */
	for (int i=0; i < relations; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int mutual=0;
	int curF=0; /* current friend */
  /* looping on all friends of Person A, and counting if Person B is a friend of them. */
	for (int i=0; i< v[first].size(); i++){
		curF = v[first][i];
		for (int j=0; j<v[curF].size();j++){
			if (v[curF][j] == second){
				mutual++;
			}
		}
	}

	cout << mutual;

}
