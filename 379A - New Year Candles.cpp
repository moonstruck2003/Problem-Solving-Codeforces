
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
int z;
using namespace std;

int main()
{
    optimize();
    int a,b,hour=0,rem=0;
    cin>>a>>b;
    while(a>0){
        hour+=a;
        rem+=a;
        a=rem/b;
        rem%=b;
    }
    cout<<hour<<endl;
}
