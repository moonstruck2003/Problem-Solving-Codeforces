#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int lucky=0;
    while(n!=0){
        int temp=n%10;
        if(temp==4 or temp==7)
            lucky++;
        n=n/10;
    }
    
    if(lucky==7 or lucky==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
