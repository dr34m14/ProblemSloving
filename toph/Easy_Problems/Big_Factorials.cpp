#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int num;
    cin>>num;
    long long  result=1;
    for (int i = 2; i <=num; i++)
    {
        result=(result*i)%10000;
    }
    cout<<result;
    
    
    return 0;
}