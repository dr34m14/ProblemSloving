#include <bits/stdc++.h>
using namespace std;
int main()
{

   long long int i;
    cin >> i;
    while (i--)
    {
         int num;
        cin >> num;
        string bin;
        cin >> bin;

        long long int result=0;
        long long pow=1;

        for (int i =bin.size()-1; i >=0; i--)
        {
            int binary_digit=bin[i]-'0';
            result+=(binary_digit*pow);
            pow=pow*2;
            
        }
        cout<<result<<endl;
        
        // for (int i = 0; i < num / 2; i++)
        // {
        //     char temp = bin[num - i - 1];
        //     bin[num - i - 1] = bin[i];
        //     bin[i] = temp;
        // }
        // int secret_num = 0;
        // for (int i = 0; i < num; i++)
        // {
        //     if (bin[i] == '1')
        //     {
        //         secret_num += pow(2, i);
        //     }
        // }
        //     cout << secret_num << endl;


    }

    return 0;
}