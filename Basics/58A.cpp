#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string x = "hello";
    int index=0;
    for(char ch :  s){
        if(ch == x[index]){
            index++;
        }
        if(index == 5){break;}
    }
    if(index == 5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}