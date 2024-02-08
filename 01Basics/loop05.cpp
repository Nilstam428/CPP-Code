//display of this AP - 1,3,5,7,9 upto n terms
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  // for(int i=1; i<=2*n-1; i=i+2)
  // {
  //   cout<<i<<endl;
  // }
  //Print this AP - 4 7 10 13 16...
  int a=4;
  for(int i=1; i<=n; i++)
    { cout<<a<<" ";
  a+=3;
    }
 return 0;
}

