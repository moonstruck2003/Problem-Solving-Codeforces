#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,cnt=1;cin>>r>>c;
    for(int i=1;i<=r;i++){

            if(i%2!=0){
                for(int k=1;k<=c;k++){
                    cout<<"#";
                }cout<<endl;cnt++;
            }
            else{
                if(cnt%2==0){
                    for(int k=1;k<c;k++){
                        cout<<".";
                    }
                    cout<<"#"<<endl;
                }
                else{
                    cout<<"#";
                    for(int k=1;k<c;k++){
                        cout<<".";
                    }cout<<endl;
                }
            }
    }
    return 0;
}
