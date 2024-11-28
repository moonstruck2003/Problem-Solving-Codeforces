#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> cnt;
        for (char c : s) {
            cnt[c]++;
        }

        int ans = 0;
        for (char c = 'A'; c <= 'G'; c++) {
            if (cnt[c] < m) {
                ans += (m - cnt[c]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
