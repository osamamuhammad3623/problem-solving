#include <bits/stdc++.h>
using namespace std;

long remove_zeros(long n ){
    string s="";
    string ns = to_string(n);
    for (int i=0;i<ns.size();i++){
        if (ns[i] != '0'){
            s+= ns[i];
        } 
    }

    return stoi(s);
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long a,b;
    cin >> a >> b;

    long s0 = a+b;

    long aa = remove_zeros(a);
    long bb = remove_zeros(b);
    long s1 = remove_zeros(s0);

    if (s1 == aa+bb){ cout << "YES";}
    else{ cout << "NO";}    
}
