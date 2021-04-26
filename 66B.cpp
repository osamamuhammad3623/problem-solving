#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){ cin >> a[i];}

    int cnt{};

    if (n==1){cout << 1; return 0;}
    for (int i=0;i<n;i++){
        if (i==0){
            // zero counter = 1 to count the first block itself
            int zero_cnt{1};
            for (int j=1;j<n;j++){
                if (a[j-1] >= a[j]){
                    zero_cnt++;
                }
                else{ break;}
            }
            cnt = max(cnt, zero_cnt);
        }
        if (i == n-1){
            int last_cnt{1};
            for (int j=n-2;j>=0;j--){
                if (a[j+1] >= a[j]){
                    last_cnt++;
                }
                else{break;}
            }
            cnt = max(cnt, last_cnt);
        }
        else{
            int m_cnt{1};
            for (int j=i+1;j<n;j++){
                if (a[j-1] >= a[j]){
                    m_cnt++;
                }
                else{ break;}
            }
            for (int j=i-1;j>=0;j--){
                if (a[j+1] >= a[j]){
                    m_cnt++;
                }
                else{break;}
            }
            cnt  = max(cnt, m_cnt);
        }
    }

    cout << cnt;
}
