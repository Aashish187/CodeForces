#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ;
    cin>>n;
    vector<int>arr(n+1,0);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        cout<<(arr[i]+arr[i+1])<<" ";
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