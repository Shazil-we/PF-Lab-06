#include <stdio.h>
int main(){
  int num, sum =0;
  while(num != 0){
    printf("Enter a number: ");
    scanf("%d" , &num);
    sum = sum + num;
  }
  printf("The sum of the numbers entered is: %d" , sum);
  return 0;
}
