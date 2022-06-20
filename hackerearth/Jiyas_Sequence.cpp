#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       long long int n,multi=1,num_s;
        cin>>n;
        while (n--)
        {
            cin>>num_s;
            multi*=num_s;
        }
        int lsd=multi%10;
        if(lsd==2||lsd==3||lsd==5)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;

        }
        
    }
    

    return 0;
}