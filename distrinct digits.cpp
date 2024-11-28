#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int l,r,flag = 1,d;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        string s = to_string (i);
        int sz = s.size();
        sort(s.begin(),s.end());
        int u = unique(s.begin(),s.end())-s.begin();
        if(sz==u){
            d=i;
            flag = 0;
            break;
        }
    }
    if(flag) cout<<"-1"<<endl;
    else cout<<d<<endl;

}
