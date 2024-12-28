#include <iostream>
#include <conio.h>
using namespace std;

class pen
{
private:
  string penname;
  string penbrand;
  int price;

public:
  pen(string penname,string penbrand,int price)
{
  this->penname=penname;
  this->penbrand=penbrand;
  this->price=price;
}

void display()
{
  cout<<"Pen name is  :"<<penname<<endl;
  cout<<"Pen Brand is :"<<penbrand<<endl;
  cout<<"Pen Price is :"<<price<<endl;
}
  ~pen()
  {
    cout<<"Object is Dead"<<endl;
  }
} ;
int main()
{
  pen*p=new pen("Fusion","Reynold",100);
  p->display();

  delete p;
}
