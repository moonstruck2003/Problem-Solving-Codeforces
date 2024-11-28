#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int jor[n/2 + 1];
    int bijor[(n+1)/2];
    int j = 0, b = 0;
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            jor[j++] = i;
        } else {
            bijor[b++] = i;
        }
    }

    vector<int> v;
    for(int i = 0; i < n/2; i++){
        v.push_back(bijor[i]);
    }
    for(int i = 0; i < j; i++){
        v.push_back(jor[i]);
    }
    cout<<v[k-1]<<endl;
    return 0;
}
