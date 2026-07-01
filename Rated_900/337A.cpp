#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n , m ;
    cin>>n>>m;
    vector<int>arr;
    for(int i = 0 ;i<m;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int a = 0;int b = n-1;
    int difference = INT_MAX;
    while(a<b && b<m){
        difference=min(difference,arr[b]-arr[a]);
        b++;a++;
    }
    cout<<difference;
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