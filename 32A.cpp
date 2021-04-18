#include <bits/stdc++.h>
using namespace std;

int main(){
	long n,d;
	cin >> n >> d;
	vector<long> soldiers(n); for (long i=0;i<n;i++){ cin >> soldiers[i];}

	long ways{};
	sort(soldiers.begin(), soldiers.begin()+n);
	for (long i=0;i<n-1;i++){
		for (long j=i+1;j<n;j++){
			if (abs(soldiers[i] - soldiers[j]) <= d){ ways+=2;}
			else{ break;}
		}
	}

	cout << ways;
}
