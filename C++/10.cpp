#include<iostream>
#include<conio.h>
using namespace std;

class area
{
public:
  printarea(int l,int b){
    cout<<"Area of Rectangle :"<<l*b<<endl;
  }
  printarea(int s){
    cout<<"Area of Square :"<<s*s<<endl;
  }
};
int main()
{
  area n;
    n.printarea(5,4);
    n.printarea(5);

    getch();
}
