
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
 	int temp;
 	int i,j;
    for (i = n+1; i <= m; i++) {
        if ( i == 1 || i == 0)
            continue;
        int flag = 1;
 
        for ( j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1){
        	temp = i;
        	break;
        }
    }
    if(m==temp)
    	cout<<"YES"<<endl;
    else{
    	cout<<"NO"<<endl;
    }
 
    return 0;
}