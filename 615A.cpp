#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
    
    set <int> distinct_bulbs;
    for (int i = 0; i < n; i++) {
        int s; cin >> s;
        for (int j = 0; j < s; j++) {
            int bulb; cin >> bulb;
            distinct_bulbs.insert(bulb);
        }
    }

    if (distinct_bulbs.size() == m){
        cout << "YES";
    }
    else{ cout << "NO";}
}
