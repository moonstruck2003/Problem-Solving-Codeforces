#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int ans = 0;
		if(x>0 ){
		int total_y = y*4;
		int total = x+total_y;
		 ans = (total + 15 - 1)/15;
		}
		else if(y>0){
			if(y%2==0) ans = y/2;
			else ans = (y/2)+1;
		}
		cout<<ans<<endl;
	}
 
 
 
	return 0;
}
