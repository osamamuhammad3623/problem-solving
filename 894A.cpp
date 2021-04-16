#include <bits/stdc++.h>
using namespace std;

string getQAQ(string s){
    string ss = "";
    for (auto c : s){
        if (c == 'Q' || c =='A'){
            ss += c;
        }
    }

    return ss;
}

int main(){
    string s; cin >> s;

    // instead of looping all over the input string, 
    // I create another string with Q's & A's and loop over it!
    string ss = getQAQ(s);
    
    int res{};
    for (int i=0;i< ss.size(); i++){

        // for every A, count Qs before & after it
        // then Q_after * Q_before = possibilty that A is
        // in the middle of 2 Qs
        if (ss[i] == 'A'){
            int Q_before{}, Q_after{};

            for (int j = 0; j <i ; j++){
                if (ss[j] == 'Q'){ Q_before++;}
            }

            for (int j = i; j <ss.size() ; j++){
                if (ss[j] == 'Q'){ Q_after++;}
            }

            res += Q_after*Q_before;
        }
    }

    cout << res << "\n";
}
