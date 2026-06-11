#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int a, b;
    cin >> a >> b;
    int years =0;
    while(1){
        a*=3;
        b*=2;
        years+=1;
        if(a>b){
            break;
        }
    }
    cout << years;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}