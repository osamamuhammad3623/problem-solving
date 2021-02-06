// link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <iostream>
#include <sstream>
using namespace std;

int main(){

    string s; cin >> s;
    int len = s.size();
    stringstream ss(s);

    int number;
    while (ss >> number) {
        cout << number << endl;
        
        // as long as I can take a comma, then we're not done yet! 
        char comma;
        if (ss >> comma) {
            continue;
        }
        else {
            break;
        }
    }
}
