#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    string s;
    cin>>s;
    bool found = false;
    for(char x : s){
        if(x == 'H'||x=='Q'||x=='9'){
            found=true;
            break;
        }
    }
    if(found){
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