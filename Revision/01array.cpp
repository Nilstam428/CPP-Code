#include<iostream>
using namespace std;
int main()
{
  // int a[10]={2,4,5,7,6,8};
  //lets get input from the user
  int n;
  cout<<"Enter size:";
  cin>>n;
  int a[n];
  cout<<"Enter the values:";
  for(int j=0; j<n; j++)
  {
    cin>>a[j];
  }

 //method 1 to print array 
  for(int i = 0; i<n; i++){
    cout<<a[i]<<endl;
  }

  //method 2 for each loop
  for(int x:a)
  {
    cout<<x<<endl;
  }
  return 0;
}