#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while (t--){

        int up{},down{};
        int n; cin >> n;
        for(int i=0; i<n;i++){
            int review; cin >> review;
            if (review == 1){ up++;}
            else if (review == 2){ down++;}
            else if (review == 3){
                // if ups == downs -> up++
                // if ups >  downs -> up++
                // if downs > ups  -> reviewer type-3 sent to 2nd server,
                //      and up++ (2nd server may end up with type-3 reviewrs only!)
                up++;
            }
        }

        cout << up << "\n";
    }
}