#include <stdio.h>
int main(){
  int i = 1, pin = 1012 , input;
  while(i<=3){
    printf("Enter your pin (must be a 4 digit number):\n");
    scanf("%d" , &input);
    if(input > 1000 && input < 9999 ){
      if(input == pin){
        printf("Correct pin.....................\n\n\nEntering ATM.........");
        return 1;
      }else{
        printf("Incorrect entry!! you have %d attempts left\n" , 3-i);
        i++;
      }
    }else{
      printf("invalid input!!\n");
    }
  }
  return 0;
}