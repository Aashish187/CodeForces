#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    string s;
    cin>>s;
    vector<char> ans;
    for(char x : s){
        if(x !='+'){
            ans.push_back(x);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i = 0 ;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1){
            cout<<"+";
        }
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