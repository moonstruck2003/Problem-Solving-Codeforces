#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper=0;
    int lower=0;
    int size=s.size();
    for(int i=0;i<size;i++){
        if(s[i]>='a' and s[i]<='z'){
            lower++;
        }
        else{
            upper++;
        }
    }
    if(lower>upper){
        for(int i=0;i<size;i++){
            if(s[i]>='A' and s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    else if(lower<upper){
        for(int i=0;i<size;i++){
            if(s[i]>='a' and s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
    }
    else if(lower==upper){
        for(int i=0;i<size;i++){
            if(s[i]>='A' and s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}