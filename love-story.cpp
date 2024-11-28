#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a="codeforces";
    for(int i=0;i<t;i++){
        string b;
        cin>>b;
        int ans=0;
        for(int k=0;k<=10;k++){
                if(b[k]!=a[k]){
                    ans++;
            }
        } 
    cout<<ans<<endl;   
    }
    
    return 0;
}