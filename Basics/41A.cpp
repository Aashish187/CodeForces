#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    string s,s1;
    cin>>s>>s1;
    reverse(s1.begin(),s1.end());
    if(s == s1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
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