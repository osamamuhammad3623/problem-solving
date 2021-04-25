#include <bits/stdc++.h>
using namespace std;
 
unsigned long long calc(unsigned long long arr[], unsigned long long l, unsigned long long r){
    if (l != 0){
        return arr[r] - arr[l-1];
    }
    return arr[r];
}

int main(){

    unsigned long long n; cin >> n;

    unsigned long long origin[n];

    for (unsigned long long i=0;i<n;i++) cin >> origin[i];

    // for question 1
    unsigned long long cs[n] = {0};
    cs[0] = origin[0];
    for (unsigned long long i=1; i<n;i++){
        unsigned long long current = origin[i];
        cs[i] = cs[i-1] + current;
    }

    // for question 2
    unsigned long long sorted[n] = {0};
    for (unsigned long long i=0;i<n;i++){ sorted[i] = origin[i];}
    sort(sorted, sorted+n);
    unsigned long long cs_sorted[n] = {0};;
    cs_sorted[0] = sorted[0];
    for (unsigned long long i=1; i<n;i++){
        unsigned long long current = sorted[i];
        cs_sorted[i] = cs_sorted[i-1] + current;
    }

    unsigned long long q; cin >> q;
    while(q--){
        unsigned long long type, l, r;
        cin >> type >> l >>r;
        if (type == 1){
            // l -1 & r-1 to convert from 1-index to 0-index
            cout << calc(cs,l-1,r-1) << endl;
        }
        else if (type == 2){
            cout << calc(cs_sorted, l-1 ,r-1) << endl;
        }
    }
}
