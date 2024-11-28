#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int k;
    vector<int>v(12);
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int sum =0,cnt=0;
    for(int i=0;i<12;i++){
        if(!(sum>=k)){
            sum+=v[i];
            cnt++;
        }
        else break;
    }
    if(sum<k){
        cout<<"-1"<<endl;
    }
    else{
        cout<<cnt<<endl;
    }
    return 0;
}
