#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ; 
    cin>>n;
    int final_count=1;
    int count  = 1;
    int prev;
    cin>>prev;
    n--;
    while(n--){
        int a ;
        cin>>a;
        if(a>=prev){
            count++;
        }
        else{
            count=1;
        }
        final_count=max(count,final_count);
        prev=a;
    }
    cout<<final_count;
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