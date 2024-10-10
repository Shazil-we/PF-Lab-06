#include <stdio.h>
int main(){
  int  quantity = 0 , i = 0 , input = 0;
  float FuelPrice = 1.50, total;
  while(i == 0){
    printf("Choose:\n1 to fuel up\n2 to exit program:");
    scanf("%d" , &input);
    if(input == 2){
      return 1;
    }else if(input == 1){
      printf("Enter quantity: ");
      scanf("%d" , &quantity);
      total = total + FuelPrice*quantity;
      printf("your total is %f\n" , total);
    }else{
      printf("invalid input\n");
    }
  }
}