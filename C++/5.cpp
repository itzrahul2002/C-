#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public :
  int id;
  string name;
  string course;
};

int main()
{
  student s1,s2;
  s1.id=1;
  s1.name="Rahul";
  s1.course="Software Engineer";
  s2.id=2;
  s2.name="Rahul keshari";
  s2.course="Software Engineer";

  cout<<"id is     :"<<s1.id<<endl;
  cout<<"Name is   :"<<s1.name<<endl;
  cout<<"Course is :"<<s1.course<<endl;

  cout<<endl;
  cout<<"id is     :"<<s2.id<<endl;
  cout<<"Name is   :"<<s2.name<<endl;
  cout<<"Course is :"<<s2.course<<endl;

  getch();
}
