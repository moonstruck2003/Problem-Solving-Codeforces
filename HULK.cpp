#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1 = "I hate ";
    string s2 = "I love ";
    string that = "that";
    string it = "it";
    for(int i=1;i<=n;i++){
        if(i%2==1 and i!=n){
            cout<<s1<<that<<" ";
        }
        else if(i%2==0 and i!=n){
            cout<<s2<<that<<" ";
        }
        else if(i%2==1 and i==n) cout<<s1<<it<<endl;
        else if(i%2==0 and i==n) cout<<s2<<it<<endl;
    }
    return 0;
}