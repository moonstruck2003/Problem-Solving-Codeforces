#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = -1;
    int totalin = 0;
    while(n--){
        int a,b;
        cin>>a>>b;
        totalin+=(b-a);
        if(totalin>max) max = totalin;
    }
    cout<<max<<endl;

    return 0;
}