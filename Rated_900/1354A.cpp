#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b >=a) cout<<b<<"\n";
    else if(d>=c) cout<<-1<<"\n";
    else{
        ll remaining_sleep = a-b;
        ll sleep_added=c-d;
        ll x = (remaining_sleep+sleep_added-1)/sleep_added;
        cout<<(c*x)+b<<"\n";
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