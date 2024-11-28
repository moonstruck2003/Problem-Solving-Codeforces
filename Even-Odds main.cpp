#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main ()
{
    long long n,k;
    cin>>n>>k;
    long long partition;
    if(n%2==0)
        partition = n/2;
    else
        partition = n/2 +1;
    long long out=0;
    if(k<=partition) out = (2*k)-1;
    else out= (k-partition)*2;
    cout<<out<<endl;
    return 0;
}