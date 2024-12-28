#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int cont=0;
  int num;
  cin>>num;

  for(int i=1;i<=num;i++)
    {
      if(num%i==0)
        {
          cont++;
        }
    }
    if(cont==2)
      {
        cout<<"Prime"<<endl;
      }
    else
      {
        cout<<"Not Prime"<<endl;
      }
}
