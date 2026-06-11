#include<bits/stdc++.h>
using namespace std;
void count(string s ){
    int n = s.size();
    vector<char>arr;
    for(int i=1;i<n-1;i++){
        arr.push_back(s[i]);
    }
    int x=  arr.size();
    if(n>10){
         cout<<s[0]<<x<<s[n-1]<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    string s ;
    for(int i =0;i<n;i++){
        cin>>s;
        count(s);
    }
    return 0;
}
