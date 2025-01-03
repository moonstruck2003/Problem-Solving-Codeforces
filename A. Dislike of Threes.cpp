
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
int z;
using namespace std;

int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;v.size()<10000;i++){
        if(i%3!=0 and i%10!=3){
            v.push_back(i);
        }
    }
    while(n--){
        int x;
        cin>>x;
        cout<<v[x-1]<<endl;
    }

}
