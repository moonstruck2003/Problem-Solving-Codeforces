#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int w,h,n,cnt=1;
        cin>>w>>h>>n;
        while(w%2==0){
            w/=2;
            cnt*=2;
        }
        while(h%2==0){
            h/=2;
            cnt*=2;
        }
    if(cnt>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }  
}



