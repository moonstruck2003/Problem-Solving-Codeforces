#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
       string s ,d;
       cin>>s;
       stack<int>l,u;
       map<int,char>ma;
       long long a ;
       for(int i = 0 ; i <= s.size();i++){
            if(s[i]=='b'){
                if(!l.empty()){
                    a = l.top();
                    ma[a] = '&';
                    l.pop();
                }
                continue;
            }
                else if(s[i]=='B'){
               
                 if(!u.empty()){
                    a = u.top();
                    ma[a] = '&';
                    u.pop();
                    }
                continue;
            }
            ma[i]=s[i];
            if(isupper(s[i])){
                u.push(i);
            }
            else{
                l.push(i);
            }
       }

       for(int i = 0 ; i< s.size() ; i++){
            if(ma.count(i) and ma[i]!='&'){
                cout<<ma[i];
            }
       }
       cout<<endl;

        
    }
}
