#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int n;
    cin>>n;
    int t25=0,t50=0,t100=0,flag = 0;
    while(n--){
        int x;
        cin>>x;
        if(x==25){
            t25++;
        }
        else if(x==50){
            if(t25>=1){
                t25--;
                t50++;
            }
            else{
                flag=1;
                break;
            }
        }
        else{
            if(t25>=1 and t50>=1){
                t25--;
                t50--;
            }
            else if(t25>=3){
                t25-=3;
            }
            else{
                flag = 1;
                break;
            }
        }
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
