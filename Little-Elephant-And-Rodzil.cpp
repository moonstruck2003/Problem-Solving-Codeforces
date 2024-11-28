#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int flag = 0;
	int min = a[0];
	int idx=0;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==min){
			flag++;
		}
	}
	if(flag==1){
		for(int i=0;i<n;i++){
			if(a[i]==min){
				idx =i ;
			}
		}
		cout<<idx+1<<endl;
	}
	else{
		cout<<"Still Rozdil"<<endl;
	}
	
	return 0;
}