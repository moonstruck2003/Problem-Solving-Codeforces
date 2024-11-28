#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[i].first==p[j].second) cnt++;
        }   
    }
  cout<<cnt<<endl;
  return 0;

}
