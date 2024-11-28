#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i=0;i<t;i++) {
        int n,a,b;
        cin>>n>>a>>b;
        int per_pis=n*a;
        int n_pair = n/2;
        int remaining =n%2;
        int cost_promotion = n_pair*b + remaining*a;
        int min_p = min(per_pis, cost_promotion);
        cout<< min_p<<endl;
    }
    return 0;
}
