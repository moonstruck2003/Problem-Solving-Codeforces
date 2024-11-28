#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    string a,b,c,d;
    cin>>a>>b>>c;
    d =a+b;
    map<char,int>v1,v2;
    for(int i=0;i<d.size();i++){
        v1[d[i]]++;
    }
    for(int i=0;i<c.size();i++){
        v2[c[i]]++;
    }
    for(int i=0;i<(c.size());i++){
        if(v1[c[i]]==v2[c[i]]){
            v2.erase(c[i]);
            v1.erase(c[i]);
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(v2.empty() and v1.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
