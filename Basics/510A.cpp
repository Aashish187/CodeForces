#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n, m;
    cin >> n >> m;
    int x = n;
    int y = m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            while (y--)
            {
                cout << "#";
            }
            y = m;
            cout << "\n";
        }
        else
        {
            if (i % 4 == 0)
            {
                cout << '#';
                for (int i = 1; i < m; i++)
                {
                    cout << '.';
                }
                cout << "\n";
            }
            else
            {
                for (int i = 1; i < m; i++)
                {
                    cout << '.';
                }
                cout << '#';
                cout << "\n";
            }
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