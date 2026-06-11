#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long stones = 1;
    for(long long i =0;i<=m;i++){
        if((a*i)>=m){
            stones*=i;
            break;
        }
    }
    for(long long i =0;i<=n;i++){
        if((a*i)>=n){
            stones*=i;
            break;
        }
    }
    cout<<stones;
    return 0;
}