#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string t;
	cin>>t;
	string p=s;
	reverse(p.begin(),p.end());
	if(t==p){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}