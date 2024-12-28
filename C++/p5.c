#include<stdio.h>
#include<conio.h>

void main(){
  int arr[5];
  int found=0;
  int num;

  printf("Enter five integer values:\n");
  for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }

  printf("Enter the value to search for: ");
  scanf("%d",&num);
  for(int i=0;i<5;i++){
    if(arr[i]==num){
      printf("SQ  %d\n",num*num);
      found=1;
      break;
    }
  }
  if(found==0){
    printf("Not Found : %d\n",num);
  }
}
