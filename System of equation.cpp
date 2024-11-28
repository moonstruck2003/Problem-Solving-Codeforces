#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int n,m,eqn1,eqn2,pair=0;
    cin>>n>>m;
    int sum = n+m;
    for(int a=0;a<sum;a++){
        for(int b=0;b<sum;b++){
            eqn1=(a*a)+b;
            eqn2=(b*b)+a;
            if(eqn1==n and eqn2==m){
                pair++;
            }
        }

    }
    cout<<pair<<endl;
   
    return 0;
}
