#include <stdio.h>
int main(){
  int num , i;
  printf("Enter a number: ");
  scanf("%d" , &num);
  for(i=2; i<num; i++){
    if(num%i == 0){
      printf("The number is not a prime number ");
      return 0;
    }
  }
  printf("The number is a prime number");
  return 0;
}
