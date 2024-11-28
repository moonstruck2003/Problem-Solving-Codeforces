#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        string ab;
        cin >> ab;
        bool found = false;
        int n = ab.size();
        for (int i = 0; i < n - 1; i++) {
            string s1 = "";
            string s2 = "";
            for (int k = 0; k <= i; k++) {
                s1 += ab[k];
            }
            for (int j = i + 1; j < n; j++) {
                s2 += ab[j];
            }
            int a = stoi(s1);
            int b = stoi(s2);
            if (b > a && s1[0] != '0' && s2[0] != '0') {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
