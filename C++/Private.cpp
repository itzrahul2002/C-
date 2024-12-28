#include <iostream>
#include <conio.h>
using namespace std;

class employee
{
  private :
    int empid;
    string empname;
    string empwork;
public :
void insertdata(int id,string name,string work)
{
  empid=id;
  empname=name;
  empwork=work;
}
void displaydata()
{
  cout<<"Employee id is :"<<empid<<endl;
  cout<<"Employee name is :"<<empname<<endl;
  cout<<"Employee work is :"<<empwork<<endl;
  cout<<endl;
}
};
int main()
{
  employee e1,e2;
  e1.insertdata(1,"Rahul","Java Devlopet");
  e1.displaydata();


  getch();
}
