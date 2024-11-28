#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
 
        if(a < b){
                int temp = a;
                a = b;
                b = temp;
        }
 
            if((c==a && b == d)||(c==b && d == a)){
               cout << "Yes" << endl;
               break;
               }
            else if((c <= a && c >= b) && (d <= a && d >= b)){
                    cout << "No" << endl;
                    }
            else if((c >= a || c <= b) && (d >= a || d <= b)){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
 
    }
}
