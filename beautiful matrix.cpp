#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
        int a[6][6];
        int e,b;
        for(int i=1;i<=5;i++){
            for(int j=1;j<6;j++){
                int x ;
                cin>>x;
                a[i][j] = x;
                if(x == 1) {
                    e = i;
                    b = j;
                }
            }
        }

        cout<<abs(3-e)+abs(3-b)<<endl;
    return 0;
}