#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int x; 
    cin>>x;
    int steps=0;
    int arr[5]={5,4,3,2,1};
    for(int i = 0 ; i< 5;i++){
        if(x>0){
        steps+=x/arr[i];
        x=x%arr[i];
        }
    }
    cout<<steps;

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