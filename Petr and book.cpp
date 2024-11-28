#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(8);
    int total = 0;
    for(int i=1;i<=7;i++){
        cin>>v[i];
    }
    int flag = 0;
    for(int i=0; ;i++){
        for(int j=1;j<=7;j++){
             total+=v[j];
                if(total>=n){
                     cout<<j<<endl;
                     flag = 1;
                     break;
                 }
    }
    if(flag==1) break;
    }
    return 0;
}
