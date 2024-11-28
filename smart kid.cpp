#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main ()
{
   int t;
   cin>>t;
   while(t--){
        string s;
        cin>>s;
        string temp1 = s;
        string temp2 = s;
        string temp3 = s;
        int flag = -1;
        if(s=="abc"){
            cout<<"YES"<<endl;
            flag = 1;
        }
        swap(temp1[0],temp1[1]);
        if(temp1=="abc"){
            cout<<"YES"<<endl;
            flag = 1;
        }
        swap(temp2[0],temp2[2]);
        if(temp2=="abc"){
            cout<<"YES"<<endl;
            flag = 1;
        }
        swap(temp3[1],temp3[2]);
        if(temp3=="abc"){
            cout<<"YES"<<endl;
            flag = 1;
        }
        if(flag==-1) cout<<"NO"<<endl;

}
    return 0;
}