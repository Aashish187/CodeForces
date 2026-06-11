#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ; 
    cin>>s;
    int  n = s.length();
    bool condition =true;
    for(int i = 1;i<n;i++){
        if(islower(s[i])){
            condition=false;
        }
    }
    if(condition){
        for(int i = 0 ;i <n;i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
            else{
                s[i]=toupper(s[i]);
            }
        }
    }
    cout<<s;
}