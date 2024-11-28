#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second < b.second);
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        vector<pair<int,int>>v;
        for(int i=1;i<=10;i++){
            int sum = 0;
            int a,b,c;
            a = x - i;
            b = y - i;
            c = z - i;
            sum+=abs(a)+abs(b)+abs(c);
            v.push_back({i,sum});
        }
        sort(v.begin(),v.end(),cmp);
        cout<<v[0].second<<endl;

        }
    }  