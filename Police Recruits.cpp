#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<map<int,int>>v(3);
    v[1][-1]=0;
    v[2][1]=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            v[1][-1]++;
            if(v[2][1]>=1){
                v[2][1]--;
                v[1][-1]--;
            }
        }
        else{
            v[2][1]+=x;
        }
    }
    cout<<v[1][-1]<<endl;
    return 0;
}
