#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

// concept is sorting
void solve() {
    int n ;
    cin>>n;
    vector<int> ans;
    while(n--){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    sort(ans.begin(),ans.end());
    for(int x : ans){
        cout<<x<<" ";
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