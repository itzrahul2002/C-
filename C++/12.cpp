#include <iostream>
#include <conio.h>
using namespace std;

class user
{
private:
  int id;
  string name;
  int mob;
  string email;
public:
  user(int id,string name,int mob,string email)
  {
    this->id=id;
    this->name=name;
    this->mob=mob;
    this->email=email;
  }
void display()
{
  cout<<"User id is :"<<id<<endl;
  cout<<"User Name is :"<<name<<endl;
  cout<<"User Mobile number id :"<<mob<<endl;
  cout<<"User Email id is :"<<email<<endl;
  cout<<endl;
}
};
int main()
{
  user*u1=new user(1,"Rahul Kumar",9560994962,"rahulthakur95609@gamil.com");
  u1->display();
  user*u2=new user(2,"Rahul Keshari",843932349,"rahulkeshari@gamil.com");
  u2->display();
}
