// #include <bits/stdc++.h>
// using namespace std;
// // Shortcuts for common types
// using ll = long long;
// using vi = vector<int>;
// using vll = vector<ll>;
// void solve() {
//     int n ;
//     cin>>n;
//     vector<vector<int>> ans;
//     while(n--){
//         int x, y ,z;
//         cin>>x>>y>>z;
//         ans.push_back({x,y,z});
//     }
//     for(int i = 0 ;i<3;i++){
//         int sum = 0 ;
//         for(int j = 0;j<ans.size();j++){
//             sum+=ans[j][i];
//         }
//         if (sum != 0 ){
//             cout<<"NO";
//             return ;
//         }
//     }
//     cout<<"YES";
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

// SECOND APPROACH 
#include <bits/stdc++.h>
using namespace std;
// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    int n ;
     cin>>n;
     int sumx=0,sumy=0,sumz=0;
     while(n--){
         int x, y ,z;
         cin>>x>>y>>z;
         sumx+=x;
         sumy+=y;
         sumz+=z;
     }
     if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
     }
     else{
        cout<<"NO";
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