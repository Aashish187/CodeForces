#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x  = (k*l)/nl; // how many toasts an be made from drinks
    int y  = c*d; // can be made from lime slices
    int z = (p/np); // can be made form toasts
    int a = min(x,y);
    int b = min(a,z);
    cout<<(b/n);
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