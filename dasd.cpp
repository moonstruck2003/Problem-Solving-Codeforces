#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	set<char>d;
	for(int i=0;i<n;i++){
		d.insert(toupper(s[i]));
	}
	if(d.size()==26) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}