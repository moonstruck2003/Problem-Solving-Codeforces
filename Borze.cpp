#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int size = s.size();
	for(int i=0;i<size;i++){
		if(s[i]=='-' and s[i+1]=='.'){
			cout<<'1';
			s[i]='0';
			s[i+1]='0';
		}
		else if(s[i]=='-' and s[i+1]=='-'){
			cout<<'2';
			s[i]='0';
			s[i+1]='0';
		}
		else if(s[i]=='.'){
			cout<<'0';
			s[i]='0';
		}
	}
	return 0;
}