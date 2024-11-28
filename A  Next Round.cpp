#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int count=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]>=arr[k-1] and arr[k-1]!=0){
			count++;
		}
		if(arr[i]>0 and arr[k-1]==0){
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}