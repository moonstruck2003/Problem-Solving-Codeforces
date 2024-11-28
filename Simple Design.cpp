#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int sum = 0;
        for(int i=x;;i++){
            int temp = i;
            while(temp!=0){
                sum+=(temp%10);
                temp = temp/10;
            }
            if(sum%k==0){
                cout<<i<<endl;
                break;
            }
            else sum = 0;
        }
    }
    return 0;
}