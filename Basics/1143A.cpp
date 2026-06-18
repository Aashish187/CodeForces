#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n;
    cin >> n;
    int left = 0;
    int right = 0;
    for (int i = 1 ;i <=n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            left=i ;
        }
        else
        {
            right=i;
        }
    }
    cout << min(left, right);
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