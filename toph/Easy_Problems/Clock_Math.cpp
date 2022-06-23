#include <bits/stdc++.h>
using namespace std;

int main()
{
    float H,M;
  float result;
  cin>>H>>M;
  result=abs(((11*M)-(60*H)))/2;
  if(result>180){
    cout<<360-result;
  }else{
    cout<<result;

  }
    
    return 0;
}