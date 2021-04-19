#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int n,m;
    cin >>n >> m;
    int min_accepted=1000;
    int max_accepted=0;
    int min_wrong=1000;

    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        min_accepted = min(min_accepted, a);
        max_accepted = max(max_accepted, a);
    }

    for (int i=0;i<m;i++){
        int b;
        cin >> b;
        min_wrong = min(min_wrong, b);
    }


    int v = max_accepted;

    while(v < min_wrong){

        if ((2*min_accepted <= v)){
            cout << v;
            return 0;
        }
        else{ v++;}
    }
    cout << -1;
    return 0;
    
}
