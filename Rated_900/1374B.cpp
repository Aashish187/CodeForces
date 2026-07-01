#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
// very hard mental maths 
// if number is divisible by any other factor other than 2 or 3 ans is -1
// if no of 2 are greater than 3 , we cannot remove 2 ans -1
// we should have 2 less than 3 , we can multiply 2 to compensate
void solve() {
    int n ;
    cin>>n;
    int cnt1=0;
    int cnt2=0;
    while(n%2==0){
        cnt1+=1;
        n/=2;
    }
    while(n%3==0){
        cnt2+=1;
        n/=3;
    }
    if(n!= 1 ){
        cout<<-1<<"\n";
    }
    else{
        if(cnt1>cnt2){
            cout<<-1<<"\n";
        }
        else{
            cout<<cnt2-cnt1+cnt2<<"\n";
        }
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