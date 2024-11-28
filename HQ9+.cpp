#include<bits/stdc++.h>
using namespace std;
int main(){
	string p;
	cin>>p;
	int size = p.size();
	int flag=0;
	for(int i=0;i<size;i++){
		if(p[i]=='H' or p[i]=='Q' or p[i]=='9'){
			flag =1;
			break;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}