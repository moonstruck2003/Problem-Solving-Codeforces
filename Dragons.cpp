#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int s,n,flag = 0;
    cin>>s>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(s<=v[i].first){
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        else{
            s+=v[i].second;
        }
    }
    if(flag==0)cout<<"YES"<<endl;

    return 0;

}
