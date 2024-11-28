#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int fav = v[f-1];
        int fc = 0;
        int gc = 0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++){
            if(v[i]>fav){
                gc++;
            }
            else if(v[i]==fav) fc++;
        }
        if(gc>=k) cout<<"NO"<<endl;
        else if(gc+fc>k) cout<<"MAYBE"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}
