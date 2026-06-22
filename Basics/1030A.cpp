#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ;
    cin>>n;
    while(n--){
        int a ;
        cin>>a;
        if(a == 1){
            cout<<"HARD"; return;
        }
    }
    cout<<"EASY";
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