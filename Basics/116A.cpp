#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n  ; 
    cin >> n ;
    int max_capacity=0;
    int capacity = 0;
    while(n--){
        int a ,  b ;
         cin>>a>>b;
         capacity+=(b-a);
         max_capacity=max(capacity,max_capacity);
    }
    cout<<max_capacity;
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