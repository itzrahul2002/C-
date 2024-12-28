#include <stdio.h>
#include <conio.h>

void main(){
  int search=20;
  printf("Enter a Array Input :");
  int arr[10];
  scanf("%d",&arr);
  int ans;

  for(int i=0;i<10;i++){
    if(arr[i]==search){
        ans =arr[i]*arr[i];
    }
  }
  printf("%d",ans);
}
