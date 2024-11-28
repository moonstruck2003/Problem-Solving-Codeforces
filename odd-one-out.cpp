#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1 and t<=270){
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<c<<endl;
        }
        if(a==c){
            cout<<b<<endl;
        }
        if(b==c){
            cout<<a<<endl;
        }
    }
    }
    return 0;
}