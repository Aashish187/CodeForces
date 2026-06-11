#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    vector<vector<int>> v(5,vector<int>(5));
   unordered_map<int,int> mpp;
    for(int i = 0 ;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>v[i][j];
            if(v[i][j] == 1){
               mpp.insert({i,j});
            }
        }
    }
    int moves = 0 ;
    for(auto it: mpp){
        if(it.first > 2){
            moves+=(it.first)-2;
        }
        else{
            moves+=2-it.first;
        }
        if(it.second>2){
            moves+=it.second-2;
        }
        else{
            moves+=2-it.second;
        }
    }

    cout<<moves;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}