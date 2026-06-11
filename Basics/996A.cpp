#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ; 
    cin>>n;
    int bills = 0 ;
    while(n>0){
        if(n >= 100){
            bills+=n/100;
            n=n%100;
        }
        else if (n>=20){
            bills+=n/20;
            n=n%20;
        }
        else if (n>=10){
            bills+=n/10;
            n=n%10;
        }
        else if (n>=5){
            bills+=n/5;
            n=n%5;
        }
        else if(n>=1){
            bills+=1;
            n--;
        }
    }
    cout<<bills;
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