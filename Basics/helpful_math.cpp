#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    vector<int> arr;
    for(int i =0;i<(n/2);i++){
        arr.emplace_back(s[2*i]);
    }
    sort(arr.begin(),arr.end());
    int x= arr.size();
    for(int i =0;i<x;i++){
        cout<<arr[i]<<"+";
    }
    return 0;
}