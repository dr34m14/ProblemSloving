#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum;
    cin>>sum;
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin>>a;
        sum-=a;
    }
    cout<<sum;
    
    return 0;
}