#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<vector<int>> *g, int start, vector<bool> *vi){

    stack<int> st;

    (*vi)[start] = 1; // mark starting node as visited

    // add neighbours to the stack
    for (auto neighbour: (*g)[start]){
        st.push(neighbour);
    }

    while(!st.empty()){
        int current = st.top();
        if ((*vi)[current]){
            st.pop();
        }else{
            (*vi)[current] = 1;
            for (auto neighbour: (*g)[current]){
                st.push(neighbour);
            }
        }
    }
}

int main(void) {
	int n; cin >> n;

	vector <int> v(n+1);

	for (int i=1; i<= n;i++){  cin >> v[i];}

	vector<bool> vi(n+1, 0);

	vector<vector<int>> g(n+1);
	for (int i=1; i<= n;i++){
		int to = v[i];

		g[i].push_back(to);
		g[to].push_back(i);
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
