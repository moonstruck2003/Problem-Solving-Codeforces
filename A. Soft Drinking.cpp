#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int per_ml = (k*l)/nl;
	int per_sl = p/np;
	int lm = c*d;
	int ans = min({per_ml,per_sl,lm})/n;
	cout<<ans<<endl;
	return 0;
}
