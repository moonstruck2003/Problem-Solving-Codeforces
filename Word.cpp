#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	cin>>x;
	if(x[0]>='a' and x[0]<='z'){
		x[0]=toupper(x[0]);
	}
	cout<<x<<endl;
	return 0;
}