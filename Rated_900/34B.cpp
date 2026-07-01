#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n, m ;
    cin>>n>>m;
    vector<int> a(n);
    int cost = 0 ;
    int count = 0;
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i =0 ;i<m;i++){
        if(a[i] < 0){
            cost+=-a[i];
        }
    }
    cout<<cost;
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