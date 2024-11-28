#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<string,string>> p;
	while(n--){

		string s1,s2;
		cin>>s1>>s2;
		p.push_back({s1,s2});
	}
	sort(p.begin(),p.end());
	int s = unique(p.begin(),p.end()) - p.begin();
	cout<<s<<endl;
	return 0;

}