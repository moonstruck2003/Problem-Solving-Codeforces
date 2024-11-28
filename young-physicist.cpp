#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int sumx=0;
    int sumy=0;
    int sumz=0;
    if(n>1 or n<=100){
    for(int i=0;i<n;i++){
    	int x,y,z;
    	cin>>x>>y>>z;
    	sumx+=x;
    	sumy+=y;
    	sumz+=z;
    	sum=sum+sumx+sumy+sumz;
    }
    if(n==1 and sum!=0){
    		cout<<"NO"<<endl;
    	}
    else if(n==1 and sumx==0 and sumy==0 and sumz==0){
    	cout<<"YES"<<endl;
    }
    else if(sumx==0 and sumy==0 or sumz==0){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
    }
    return 0;
}