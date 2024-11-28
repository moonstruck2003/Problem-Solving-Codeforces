#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while( t-- )
    {
        int n;
        cin>>n;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        int max = v1[n-1];
        int min = v1[0];
        int c1= 0;
        int c2= 0;
        for(int i=0;i<n;i++){
            if(v1[i]==max) c1++;
            if(v1[i]==min) c2++;
        }
        int ans = 0;
        if(c1==1){
            ans  = max;
        }
        else ans = min;
        for(int i=0;i<n;i++){
            if(v2[i]==ans){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}