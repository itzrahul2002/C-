#include <iostream>
#include <conio.h>
using namespace std;

struct student
{
  int id;
  string name;
  int  age;
};
int main()
{
  struct student s1;
  s1.id =1;
  s1.name="Rahul";
  s1.age=12;

  cout<<"Student id is :"<<s1.id<<endl;
  cout<<"Student name is :"<<s1.name<<endl;
  cout<<"Student age is :"<<s1.age<<endl;

  getch();
}

