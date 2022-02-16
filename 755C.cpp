#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> *g, int start, vector<bool> *vi){

    (*vi)[start] = 1; // mark starting node as visited

    // add neighbours to the stack
    for (auto neighbour: (*g)[start]){
        if (!(*vi)[neighbour]){
        	dfs(g,neighbour, vi);
        }
    }
}

int main(void) {
	int n; cin >> n;

	vector <int> v(n+1,0);

	for (int i=1; i<= n;i++){  cin >> v[i];}

	vector<bool> vi(n+1, 0);

	vector<vector<int>> g(n+1);
	for (int i=1; i<= n;i++){
		g[i].push_back(v[i]);
		g[v[i]].push_back(i);
	}


	int c=0;
	for (int i=1; i<=n;i++){
		if (!vi[i]){
			dfs(&g, i, &vi);
			c++;
		}
	}

	cout << c;
}
