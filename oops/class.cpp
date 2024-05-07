#include<iostream>
using namespace std;
class Student
{
  public:
  string name;
  int age, roll_no;
  string grade;

};
int main()
{
  Student S1;
  S1.name = "Nilesh";
  S1.age = 21;
  S1.roll_no = 15;
  S1.grade = "A";
  cout<<S1.name;
  return 0;
}