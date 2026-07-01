#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    int x = a-b;
    int y = a+b;
    int z = c-d;
    int u =c+d;
    if(n*x> c+d || n*y <c-d){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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