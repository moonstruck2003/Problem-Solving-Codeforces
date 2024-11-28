#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>q(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>q[i];
            int a = q[i];
            m[a]++;
        }
        int ans = 0;
        for(auto u:m){
            int count = u.second;
            ans+=count/3;
        }
        cout<<ans<<endl;
    }

    return 0;
}
