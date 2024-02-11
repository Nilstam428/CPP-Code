#include<iostream>
#include<string.h>
using namespace std;

//user defined
struct student {
  int roll;
  float cgpa;
  char name[20];
};
int main()
{
  
  //student 1
  struct student s1;
  s1.roll = 15;
  s1.cgpa = 7.92;
  strcpy(s1.name, "Nilesh Tamboli");
  cout<<"Student name:"<<s1.name<<endl;
  cout<<"Student roll no:"<< s1.roll<<endl;
  cout<<"Student CGPA:"<< s1.cgpa<<endl;
  
  //student 2
  struct student s2;
  s2.roll = 12;
  s2.cgpa = 9.32;
  strcpy(s2.name, "Ramesh");
  cout<<"Student Name:"<<s2.name<<endl;
  cout<<"Student Roll No.:"<<s2.roll<<endl;
  cout<<"Student CGPA:"<<s2.cgpa<<endl;

  //student 3
  struct student s3;
  s2.roll = 13;
  s2.cgpa = 10.0;
  strcpy(s3.name, "Suresh");
  cout<<"Student NameL:"<<s3.name<<endl;
  cout<<"Student Roll No.:"<<s3.roll<<endl;
  cout<<"Student CGPA: "<<s3.cgpa;
  return 0;
}