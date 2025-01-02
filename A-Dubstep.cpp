#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    string a,result;
    cin>>a;
    int t=0;
    for(int i=0;i<a.length();){
        if(i<a.length() and a[i]=='W' and a[i+1]=='U' and a[i+2]=='B'){
            a[i]=' ';
            a[i+1]=' ';
            a[i+2]= ' ';
            i+=3;
        }
        else i++;
    }
    bool in=false;
    for(auto u:a){
        if(u!=' '){
            result+=u;
            in=true;
        }
        else if(in){
            result+=' ';
            in=false;
        }
    }
    if(!result.empty() and result.back()==' ')
        result.pop_back();
    cout<<result<<endl;
}

