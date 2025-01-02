#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

}
