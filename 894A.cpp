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
        if (ss[i] == 'Q'){
            for (int j=i; j< ss.size(); j++){
                if (ss[j] == 'A'){
                    for (int k=j; k< ss.size(); k++){
                        if (ss[k] == 'Q'){
                            res++;
                        }
                    }
                }
            }
        }
    }

    cout << res << "\n";
}
