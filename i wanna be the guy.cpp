#include<bits/stdc++.h>
#define end '\n'
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p;
	cin>>p;
	set<int>real;
	while(p--){
		int x;
		cin>>x;
		real.insert(x);
	}
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		real.insert(x);
	}
	if(real.size()==n) cout<<"I become the guy."<<endl;
	else cout<<"Oh, my keyboard!"<<endl;
	return 0;
}