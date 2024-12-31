#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}

	int bs=v[0],ws=v[0],ans=0;
	for(int i=1;i<n;i++){
		if(v[i]>bs){
             ans++;
             bs = v[i];
		}
		if(v[i]<ws) {
            ans++;
            ws = v[i];
		}
	}
	cout<<ans<<endl;


	return 0;
}
