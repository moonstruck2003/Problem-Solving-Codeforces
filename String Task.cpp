#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    string s;
    cin>>s;
    vector<char> v;
    int n = s.size();
    for(int i=0;i<n;i++){
        if((s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='Y' or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')){
            continue;
        }
        else{
            char c = tolower(s[i]);
            char d = '.';
            cout<<d<<c;
        }

    }
    cout<<endl;
    return 0;
}