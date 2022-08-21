#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    double x;
    cin>>x;
    int y=floor(x);
    int num_plus=y/10;
    string s="[";
    for (int i = 1; i <= 10; i++)
    {
        if(i<=num_plus){
            s+="+";
        }else{
            s+=".";
        }
    }
    s+="] ";
    cout<<s<<y<<"%"<<endl;
    return 0;
}