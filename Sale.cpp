#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i=0;i<m;i++){
        if(v[i]>=0){
            break;
        }
        else{
            ans+=-1*(v[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
