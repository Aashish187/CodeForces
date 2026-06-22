#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    long long a, b;
    cin>>a>>b;
    int rem = a % b;
    if(rem == 0){
        cout<<rem<<"\n";
    }
    else{
        cout<<b-rem<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}