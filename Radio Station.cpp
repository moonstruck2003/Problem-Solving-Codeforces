#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	int n,m;
	cin>>n>>m;
	map<string , string> ipName;
	for(int i=0;i<n;i++){
		string name,ip;
		cin>>name>>ip;
		ipName[ip] = name;
	}
	while(m--){
		string s1,ip;
		cin>>s1>>ip;
		ip.pop_back();
		cout<<s1<<" "<<ip<<"; #"<<ipName[ip]<<endl;
	}



	return 0;
}