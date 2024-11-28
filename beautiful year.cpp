#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n+1;;i++){
        int d = i;
        string s = to_string(d);
        sort(s.begin(),s.end());
        int z= unique(s.begin(),s.end())-s.begin();
        if(z==s.size()){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}