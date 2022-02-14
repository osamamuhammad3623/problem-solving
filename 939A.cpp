#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n; cin >> n;

	vector<int> v (n);

	for (int i=0; i< n; i++){cin >> v[i];}

	int fst,snd,trd, fth; // 1st, 2nd, 3rd, 4th
	for(int i=0; i< n;i++){
		fst = i;
		snd = v[i]-1;
		trd = v[snd]-1;
		fth = v[trd] -1;

		if (fth == fst){
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}
