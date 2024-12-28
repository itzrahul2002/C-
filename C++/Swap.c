#include <stdio.h>
#include <conio.h>

void main(){
  int x=10;
  int y=20;

  printf("X = %d\n",x);
  printf("Y = %d\n",y);

  int temp=x;
  x=y;
  y=temp;

  printf("X = %d\n",x);
  printf("Y = %d\n",y);
}
