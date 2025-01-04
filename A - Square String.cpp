#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
int z;
using namespace std;

int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
    string a,b,c;
    cin>>c;
    if(c.length()%2!=0) cout<<"NO"<<endl;
    else {
        for(int i=0;i<c.length()/2;i++){
            a+=c[i];
        }
        for(int i=c.length()/2;i<c.length();i++){
            b+=c[i];
        }
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}
