#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n';
using namespace std;
int main() {
    optimize();

        int k,l,m,n,d,cnt=0;
        cin>>k>>l>>m>>n>>d;
        for(int i=1;i<=d;i++){
            if(i%k==0) cnt++;
            else if(i%l==0) cnt++;
            else if(i%m==0) cnt++;
            else if(i%n==0) cnt++;
        }
        cout<<cnt<<endl;
        return 0;
    }
