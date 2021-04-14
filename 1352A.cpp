#include <bits/stdc++.h>

using namespace std;

int get_summands(int n){
    string s = to_string(n);
    int summands = 0;
    for (int i=0; i< s.size(); i++){
        if (s[i] != '0'){ summands++;}
    }
    return summands;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >>t;

    while(t--){
        int n; cin >> n;
        int summands = get_summands(n);
        cout << summands << "\n";

        int weight =0;
        int remainder = n%10;
        while(n){
            if (remainder != 0){
                cout << remainder * pow(10,weight) << " ";
            }

            weight++;
            n /=10;
            remainder = n%10;
        }
        cout << endl;
    }
}
