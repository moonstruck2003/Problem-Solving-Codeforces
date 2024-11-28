#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        int A=0;
        int B=0;
        for(int j=0;j<5;j++){
            if(a[j]=='A'){
                A++;
            }
            else{
                B++;
            }
        }
        if(A>B){
                cout<<"A"<<endl;
            }
            else{
                cout<<"B"<<endl;
            }
    }
    
    
    return 0;
}