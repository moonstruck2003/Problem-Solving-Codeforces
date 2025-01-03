#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    int a,b,ans1=0,ans2=0;
    cin>>a>>b;
    if(a>b){
        ans1+=b;
        a-=b;
        b=0;
        while(a!=0 and a!=1){
            ans2+=1;
            a-=2;
        }
    }
    else if(a<b){
        ans1+=a;
        b-=a;
        a=0;
        while(b!=0 and b!=1){
            ans2+=1;
            b-=2;
        }
    }
    else if(a==b){
        ans1=a;
        ans2=0;
    }

    cout<<ans1<<" "<<ans2<<endl;

}
