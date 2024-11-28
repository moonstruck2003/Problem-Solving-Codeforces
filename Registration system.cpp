#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	int n;
	cin>>n;
	map<string,int> vis;
	while(n--)
	{
		string s;
		cin>>s;
		if(vis[s]==0) cout<<"OK"<<endl;
		else cout<<s<<vis[s]<<endl;
		vis[s]++;
	}



	return 0;
}