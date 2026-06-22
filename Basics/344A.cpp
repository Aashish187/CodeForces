#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n;
    cin>>n;
    string prev;
    cin>>prev;
    int groups= 1 ;
    n--;
    while(n--){
        string s;
        cin>>s;
        if(prev != s){
            groups+=1;
        }
        prev=s;
    }
    cout<<groups;
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