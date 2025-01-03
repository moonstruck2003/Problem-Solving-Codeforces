#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
int z;
using namespace std;

int main()
{
    optimize();
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int z=s[i]-'0';
        if(z==1) ans+=a;
        else if(z==2) ans+=b;
        else if(z==3) ans+=c;
        else ans+=d;
    }
    cout<<ans<<endl;

}
