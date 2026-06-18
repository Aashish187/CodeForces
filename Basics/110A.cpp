#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    ll n; 
    cin>>n;
    int count= 0 ; 
    while(n>0){
        int last_digit=n%10;
        if(last_digit == 4 || last_digit==7){
            count++;
        }
        n/=10;
    }
    if(count == 4||count ==7){
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