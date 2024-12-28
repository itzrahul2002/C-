#include <iostream>
#include <conio.h>
using namespace std;
class worker
{
private :
  int empid;
  string empname;
  string empwork;

public :
worker(int id,string name,string work)
{
    empid=id;
    empname=name;
    empwork=work;
}
worker()
{
  cout<<"Hello Constructor "<<endl;
}
void displaydata()
{
  cout<<"User id is :"<<empid<<endl;
  cout<<"User name is :"<<empname<<endl;
  cout<<"User work is :"<<empwork<<endl;
}
};

int main()
{
  worker w1=worker(1,"Rahul","Software Engineer");
  w1.displaydata();
  cout<<endl;

  worker w2=worker(2,"Rahul Keshari","Web Devloper");
  w2.displaydata();
  getch();
}
