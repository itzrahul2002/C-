#include <iostream>
#include <conio.h>
using namespace std;

class user
{
  public :
        int id;
        string name;
        string course;
};

int main()
{
  user s1;
      s1.id=1;
      s1.name="Rahul Thakur";
      s1.course="Java FullStack";

  cout<<"Id is :"<<s1.id<<endl;
  cout<<"Name is :"<<s1.name<<endl;
  cout<<"Course is :"<<s1.course<<endl;
  cout<<endl;

  user s2;
      s2.id=2;
      s2.name="Rahul Keshari";
      s2.course="Java FullStack";

  cout<<"Id is :"<<s2.id<<endl;
  cout<<"Name is :"<<s2.name<<endl;
  cout<<"Course is :"<<s2.course<<endl;
  cout<<endl;

  getch();
}
