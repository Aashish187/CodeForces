#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    int ones= 0 ;
    for(char x : s){
        if(x=='1') ones++;
    }
    int zeros = n-ones;
    cout<<abs(zeros-ones);
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