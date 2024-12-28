#include <stdio.h>
#include <conio.h>

void main(){
  char str[10];

  int i;
  scanf("%s",&str);

  for(i=0;str[i]!='\0';i++);
  printf("length : %d",i);
}
