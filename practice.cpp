#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
int z;
using namespace std;

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v1(n),v2(n),v3(n);
        for(int i=0;i<n;i++){
                int x;
                cin>>x;
                v1[i]=x;
        }
        for(int i=0;i<n;i++){
                int x;
                cin>>x;
                v2[i]=x;
        }
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        for(int i=0;i<n;i++){
            int x = (v1[i]+v2[i])%m;
            v3[i]=x;
        }
        sort(v3.begin(),v3.end());
        cout<<v3[n-1]<<endl;

    }

    return 0;
}
