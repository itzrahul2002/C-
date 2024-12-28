#include <iostream>
#include <conio.h>
using namespace std;

class employee
{
private:
  int empid;
  string empname;
  string empwork;
public:
  employee(int id,string name,string work)
  {
    empid=id;
    empname=name;
    empwork=work;
  }

void display()
{
  cout<<"Employee id   is :"<<empid<<endl;
  cout<<"Employee name is :"<<empname<<endl;
  cout<<"Employee Work is :"<<empwork<<endl;
  cout<<endl;
}
};
int main()
{
  employee e1=employee(1,"Rakesh Kumar","Frontend Designer");
  e1.display();
  employee e2=employee(2,"Suresh Sharma","Backend Devloper");
  e2.display();
}
