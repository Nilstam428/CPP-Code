//print all the even numbers from 1 tp 100

#include<iostream>
using namespace std;
int main()
{
  
  // for(int i=1; i<=100; i++)
  // {
  //   if(i%2==0)
  //   cout<<i<<endl;
  // }
  
  //better method no use of looop
  for(int i=1; i<=99; i = i+2)
  cout<<i<<endl;
  return 0;
}