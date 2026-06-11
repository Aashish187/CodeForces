#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int x = 0, y = 0;
    for (char s : a)
    {
        if (islower(s))
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(x>y || x==y){
        for(char &s : a){
            s=tolower(s);
        }
    }
    else{
        for(char &s : a){
            s=toupper(s);
        }
    }
    cout << a;
    return 0;
}