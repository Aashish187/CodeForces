// #include <bits/stdc++.h>
// using namespace std;

// // Shortcuts for common types
// using ll = long long;
// using vi = vector<int>;
// using vll = vector<ll>;

// void solve() {
//     string a , b ;
//     cin>>a>>b;
//     int i = 0; int j = 0 ;
//     int flag = 0 ; 
//     while(i<a.size()){
//         if(tolower(a[i]) == tolower(b[j])){
//     }

//     else if ((int) tolower(a[i]) > (int) tolower(b[j])){
//         flag =1 ;
//         break;
//     }
//     else{
//         flag=-1;
//         break;
//     }
//     i++;j++;
//     }
//     cout<<flag;
    
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     // cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }

// 2nd solution
#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    string a ,b ;
    cin>>a>>b;
    for(int i = 0; i<a.length();i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    if (a>b) cout<<1;
    else if (a<b) cout<<-1;
    else cout<<0;
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