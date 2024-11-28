#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int idx = -1 ;
		int max = 0;
	for(int i=1;i<=n;i++){

		int x; cin>>x;
		int y; cin>>y;
		if(x<=10 and y>max){
			idx = i;
			max = y;
		}
	}
	cout << idx<<endl;
	}
	return 0;
}