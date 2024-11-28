#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

using namespace std;

int main()
{
    optimize();
    long long t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int row;
        cin >> row;
        
        vector<vector<char>> vi(row, vector<char>(4));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> vi[i][j];
            }
        }
        
       for(int i=row-1;i>=0;i--){
         for(int j=0;j<=3;j++){
            if(vi[i][j]=='#') cout<<j+1<<" ";
         }
       }
       cout<<endl;
    }
    return 0;
}
