#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ; 
    cin>>n;
    string s ;
    cin>>s;
    int anton= 0 ;
    int danik = 0;
    for(char x : s){
        if(x == 'A'){
            anton++;
        }
        else{
            danik++;
        }
    }
    if(anton > danik){
        cout<<"Anton";
    }
    else if( anton == danik){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
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