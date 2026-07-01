#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
/*
maths  =  x 2020+ y 2021 =n
x 2020 + y2020 + y = n
x=n-y/2020  - y
since y >= 0 so x >=0 to be sum of 2020 and 2021

*/
void solve() {
    int n ;
    cin>>n;
    int rem = n %2020;
    int x = ((n-rem)/2020) - rem;
    if(x >= 0){
        cout<<"\nYES";
    }
    else{
        cout<<"\nNO";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}