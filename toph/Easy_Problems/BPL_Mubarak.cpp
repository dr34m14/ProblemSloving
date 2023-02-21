#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count_balls = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'N' && s[i] != 'W' && s[i] != 'D')
            {
                count_balls++;
            }
        }
        int over = count_balls / 6;
        int balls = (count_balls % 6);
        if (over >1)
        {
            // add overs
          cout<< over<< " OVERS ";
        }else if(over == 1)
        
        {
            // add overs
             cout<<"1 OVER ";

        }
         if (balls > 1)
        {
            // add balls
           cout<<balls<<" BALLS";
        }else if(balls == 1)
        
        {
            // add ball
             cout<<"1 BALL";

        }
        cout<<"\n";
    }

    return 0;
}