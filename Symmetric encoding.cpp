#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<char>b;
	vector<char>r;
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		b.push_back(c);
		r.push_back(c);
	}	
	sort(r.begin(),r.end());
	int sz = unique(r.begin(),r.end())-r.begin();
	vector<char>a;
	for(int i=0;i<n;i++){
		for(int j=0;j<sz;j++){
			if(b[i]==r[j]){
				b[i]=r[sz-j-1];
				break;
			}
		}
	}
	for(auto u:b) cout<<u;
	cout<<endl;


}
	return 0;
}