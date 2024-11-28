#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int sz = unique(v.begin(),v.end())-v.begin();
        if(sz == n ){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
}
    return 0;
}