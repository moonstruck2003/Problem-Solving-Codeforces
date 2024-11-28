#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    string s;
    cin >> s;
    bool valid = true;
    for (int i = 0; i<s.length();) {
        if(s.substr(i, 3) == "144"){
            i += 3;
        }
        else if(s.substr(i, 2) == "14"){
            i += 2;
        } 
        else if(s.substr(i, 1) == "1") {
            i += 1;
        } 
        else{
            valid = false;
            break;
        }
    }
    if(valid) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
