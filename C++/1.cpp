#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int num1,num2;
  cout<<"Enter First Number :";
  cin>>num1;
  cout<<"Enter Second Number :";
  cin>>num2;

  if(num1>num2)
    {
      cout<<"Max is :"<<num1<<endl;
    }
  else
    {
      cout<<"Max is :"<<num2<<endl;
    }


  getch();
}
