#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int s, n;
    cin >> s >> n;
    
    vector<pair<int,int>> dragons(n);
    for(int i = 0; i < n; i++){
        cin >> dragons[i].first >> dragons[i].second; // strength, bonus
    }
    
    // Sort by strength
    sort(dragons.begin(), dragons.end());
    
    for(auto d : dragons){
        if(s <= d.first){   // can't beat this dragon
            cout << "NO";
            return;
        }
        s += d.second;      // beat it, gain bonus
    }
    cout << "YES";
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