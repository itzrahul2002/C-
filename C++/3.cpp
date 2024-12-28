#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  float ac,tc;
  float per;
  cout<<"Enter the Total number of classes :";
  cin>>tc;
  cout<<"Enter Your Class Attendance :";
  cin>>ac;

  per=tc/ac*100;

  cout<<per<<endl;
  if(per>=60)
    {
      cout<<"You are Eligible";
    }
  else
    {
      cout<<"You are Not Eligible";
    }

  getch();
}
