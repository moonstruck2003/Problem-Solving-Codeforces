#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	int size=n.size();
	int flag =-1;
	for(int i=0;i<size;i++){
		if(size<7){
			flag = -1;
		}
		if(n[i]=='0' and n[i+1]=='0' and n[i+2]=='0' and n[i+3]=='0' and n[i+4]=='0' and n[i+5]=='0' and n[i+6]=='0'){
			flag = 1;
			break;
		}
		else if(n[i]=='1' and n[i+1]=='1' and n[i+2]=='1' and n[i+3]=='1' and n[i+4]=='1' and n[i+5]=='1' and n[i+6]=='1'){
			flag = 1;
			break;
		}	
	}
	
	if(flag==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}