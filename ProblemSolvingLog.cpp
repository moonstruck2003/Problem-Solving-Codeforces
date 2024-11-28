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
        string s;
        cin>>s;
        map<char,int>v;
        for(int i=0;i<n;i++){
            v[s[i]]++;
        }
        int ans = 0;
        sort(s.begin(),s.end());
        int sz = unique(s.begin(),s.end())- s.begin();
        for(int i = 0 ; i<sz;i++){
            int x = s[i] - 'A' + 1;
            if(v[s[i]]>=x) ans++; 
        }
        cout<<ans<<endl;

    }
    return 0;
}
