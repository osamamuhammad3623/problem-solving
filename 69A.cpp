#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    long X{},Y{},Z{};
    for (int i=0; i<n;i++){
        int x,y,z;
        cin >> x >> y >> z;
        X+=x;
        Y+=y;
        Z+=z;
    }

    if (X == 0 && Y == 0 && Z == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
