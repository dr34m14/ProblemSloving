#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int num,res=0;
    cin>>num;
    for (int i = 1; i <= num/2; i++)
    {
        if(num%i==0)
        {
            res++;

        }
    }
    cout<<res;
    
    return 0;
}