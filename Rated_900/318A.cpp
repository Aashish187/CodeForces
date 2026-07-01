#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void optimised(){
    long long n, k;
    cin >> n >> k;
    ll number_ofOdds=(n+1)/2;
    if(k <= number_ofOdds){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-number_ofOdds);
    }
}
void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= (n / 2))
        {
            cout << (2 * k) - 1;
        }
        else
        {
            cout << 2 * (k - (n / 2));
        }
    }
    else
    {
        long long mid=(n+1)/2;
        if(k<=mid){
            cout<<(2*k)-1;
        }
        else{
            cout << 2 * (k - (mid));
        }
    }
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