
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    int a,b,c,a1,a2,a3,a4,a5;
    cin>>a>>b>>c;
    a1=a+b+c;
    a2=a*b*c;
    a3=(a+b)*c;
    a4=a*(b+c);

    vector<int>v;
    v.push_back(a1);
    v.push_back(a2);
    v.push_back(a3);
    v.push_back(a4);

    sort(v.begin(),v.end());
    cout<<v[3]<<endl;
}
