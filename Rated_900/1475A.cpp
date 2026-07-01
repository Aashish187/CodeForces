#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

// uses bit manipulation : O(1) complexity
void solve1(){
    long long n ; 
    cin>>n;
    if((n & (n-1) )== 0){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
}

//time complexity : O(logn)
void solve() {
    long long n ;
    cin>>n;
    while(n % 2 == 0){
        n/=2;
    }
    if(n> 1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve1();
    }

    return 0;
}