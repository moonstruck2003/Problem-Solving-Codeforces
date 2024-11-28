#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &u : v) {
            cin >> u;
        }
        int ans = v[n-1],mx = -1;
        for(int i = 0 ;i<n-1;i++){
            mx = max(v[i],mx);
        }
        cout<<ans+mx<<endl;
    }
    return 0;
}
