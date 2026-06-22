#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ;
    cin>>n;
    int count = 0 ;
    while(n--){
        int a , b;
        cin>>a>>b;
        if(b-a >= 2){
            count++;
        }
    }
    cout<<count;
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