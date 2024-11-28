#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

bool prime(long long n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    
    for(int i = 3; i*i<=n ; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
       long long n;
       cin>>n;
       bool x = prime(n);
       if(x) cout<<"yes"<<endl;
       else cout<<"no"<<endl;
    }
    return 0;
}
