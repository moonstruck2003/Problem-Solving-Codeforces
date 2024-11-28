#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        string time;
        cin >> time;
        int hour=(time[0] - '0') * 10 + (time[1] - '0');
        int minute=(time[3] - '0') * 10 + (time[4] - '0');
        string ampm;
        if(hour<12)
            ampm ="AM";
        else
        	.......
            ampm ="PM";
        
        if(hour ==0)
            hour = 12;
        else if(hour > 12)
            hour-= 12;
        cout<<(hour<10?"0":"")<<hour<<":"<<time.substr(3, 2)<<" "<<ampm<<endl;
    }

    return 0;
}
