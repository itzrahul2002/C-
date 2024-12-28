#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int a,b,c;
  cout<<"Enter First person age :";
  cin>>a;
  cout<<"Enter second person Age :";
  cin>>b;
  cout<<"Enter Third person Age :";
  cin>>c;

  if(a>=b && a>=c)
    {
      cout<<"First person is Youngest"<<a<<endl;
    }
  if(b>a && b>c)
    {
      cout<<"Second person is Youngest"<<b<<endl;
    }
  if(c>=a && c>=b)
    {
      cout<<"Third person is Youngest"<<c<<endl;
    }


  if(a<=b && a<=c)
    {
      cout<<"First person is Smallest"<<a<<endl;
    }
  if(b<=a && b<=c)
    {
      cout<<"Third person is Smallest"<<b<<endl;
    }
  if(c<=a && c<=b)
    {
      cout<<"Third person is Smallest"<<c<<endl;
    }

  getch();
}

