#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n , h;
    cin>>n>>h;
    int width = 0;
    while(n--){
        int a ;
        cin>>a;
        if(a <= h){
            width+=1;
        }
        else{
            width +=2;
            }
        }
        cout<<width;
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