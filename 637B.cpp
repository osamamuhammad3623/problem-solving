#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(void){

	int n; cin >> n;
	unordered_set<string> s;
	vector<string> v(n);

	for (int i =0; i< n ;i++){
		cin >> v[i];
	}

	for (int i= n-1; i>=0 ; i--){
		auto it = s.find(v[i]);
		if (it == s.end()){
			cout << v[i] << "\n";
			s.insert(v[i]);
		}
	}
}
