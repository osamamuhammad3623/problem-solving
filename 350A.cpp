#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int n,m;
    cin >>n >> m;
    int a[n]; int b[m];
    for (int i=0;i<n;i++){ cin >> a[i];}
    for (int i=0;i<m;i++){ cin >> b[i];}

    sort(a,a+n);
    sort(b,b+m);

    int v = a[n-1];

    // while v is less than the least wrong answer time
    while(v < b[0]){

        if ((2*a[0] <= v)){
            cout << v;
            return 0;
        }
        else{ v++;}
    }
    cout << -1;
    return 0;
    
}
