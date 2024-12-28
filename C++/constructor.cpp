#include <iostream>
#include <conio.h>
using namespace std;

class user
{
  private :
    int id;
    string userid;
    string name;

  public :
insta(int id,string user,string name)
{
      id=id;
      userid=user;
      name=name;
}
insta()
{
  cout<<"Hello Constructor "<<endl;
}
void displaydata()
{
  cout<<"instagram id is :"<<id<<endl;
  cout<<"Instagram User Is :"<<userid<<endl;
  cout<<"Instagram user name is :"<<name<<endl;
}
};
int main()
{
  user i1;
  insta i1=insta(1,"Itz_rahulthakur","Rahul Thakur");
  i1.diplaydata();
}
};
