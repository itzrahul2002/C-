#include <stdio.h>
#include <conio.h>

void main(){
  int n;
  printf("Enter a Number : ");
  scanf("%d",&n);

  int count=0;
  for(int i=2;i<=n/2;i++){
    if(n%i==0){
      printf("This is Not Prime %d",n);
    }
    else{
      printf("This is Prime %d",n);
    }
  }
}
