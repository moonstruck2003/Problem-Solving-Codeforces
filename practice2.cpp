#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int min=INT_MAX;
		for(int i=0;i<n;i++){
			if(a[i]<min)
				min=a[i];
		}
		int ans[n];
		for(int i=0;i<n;i++){
			ans[i]=abs(a[i]-min);
		}
		int answer=0;
		for(int i=0;i<n;i++){
			answer+=ans[i];
		}
		
		cout<<answer<<endl;
	}
	return 0;
}