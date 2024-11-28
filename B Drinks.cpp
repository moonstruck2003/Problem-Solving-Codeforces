#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	double res2 = 0;
	for(int i=0;i<n;i++){
		res2+=p[i];
	}
	double result1 = res2/n;
	cout<<fixed<<setprecision(12)<<result1<<endl;
	return 0;
}