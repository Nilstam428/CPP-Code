#include<iostream>
using namespace std;
struct Rectangle{
  int length;
  int breadth;
};

int main()
{
  struct Rectangle r1 = {5,7};
  cout<<r1.length<<endl;
  cout<<r1.breadth<<endl;
  cout<<"Area of the rectangle is: "<<r1.length*r1.breadth<<endl;
  //Update the data
  r1.length = 10;
  r1.breadth = 20;
  cout<<r1.length<<endl;
  cout<<r1.breadth<<endl;
  cout<<"Area of the rectangle is: "<<r1.length*r1.breadth<<endl;
  return 0;
}