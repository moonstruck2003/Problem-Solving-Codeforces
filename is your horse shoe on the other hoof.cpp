#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main ()
{
    vector<int> v;
    for(int i=0;i<4;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int unq = unique(v.begin(),v.end())-v.begin();
    cout<<(4-unq)<<endl;

    return 0;
}