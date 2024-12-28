#include <iostream>
#include <conio.h>
using namespace std;

class printname
{
public :
   void printn(int n) {
        cout<<"Integer:"<<n<<endl;
   }
   void printn(float n){
        cout<<"Float :"<<n<<endl;
   }
   void printn(double n){
        cout<<"Double :"<<n<<endl;
   }

};
int main()
{
  printname p;
    p.printn(5);
    p.printn(2.5);
    p.printn(4.55555);

  getch();
}
