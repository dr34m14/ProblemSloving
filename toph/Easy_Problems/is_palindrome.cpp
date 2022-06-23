#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    long long int len=a.length();
    for (int i = len-1; i >=0; i--)
    {
       b.push_back(a[i]);
    }
    if(a==b){cout<<"YES";}
    else{cout<<"NO";}
    
    return 0;
}