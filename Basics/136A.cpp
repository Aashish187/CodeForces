#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common types
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void better(){
    // inverse mapping 
    // 1 -> 4 gifts so at index 4 will be 1
    int n ;
    cin>>n;
    vector<int> arr(n+1) ; 
    for(int i = 1;i<=n;i++){
        int receiver ;
        cin>>receiver;
        arr[receiver]=i;
    }
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}



void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    while (n--)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 1; i <= arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == arr[j])
            {
                cout << j + 1 << " ";
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