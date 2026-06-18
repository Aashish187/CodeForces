#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
// do not store the string just keep the previous and current character
void solve1(){
    int n ;
    cin>>n;
    char prev;
    cin>>prev;
    int count = 0 ;
    for(int i = 1 ;i<n;i++){
        char current ;
        cin>>current;
        if(current == prev){
            count++;
        }
        else{
            prev=current;
        }
    }
    cout<<count;
}

// this approach is good 
void solve() {
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    int count = 0 ;
    for(int i = 0;i<n-1;i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout<<count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve1();
    }
    return 0;
}