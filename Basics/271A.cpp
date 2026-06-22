#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

bool is_distinct(int n ){
    bool seen[10]={false};
    while(n>0){
        int ld=n%10;
        if(seen[ld] == true){
            return false;
        }
        seen[ld]=true;
        n/=10;
    }
    return true;
}

void solve() {
    int n ;
    cin>>n;
    n++;
    while(! is_distinct(n)){
        n++;
    }
    cout<<n;   
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