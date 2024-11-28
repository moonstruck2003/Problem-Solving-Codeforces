#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
         string d;
         cin>>d;
         int a= d[0]-'0';   
         int b= d[2]-'0';
         int ans = a+b;
        cout<<ans<<endl;
    }
    return 0;
}