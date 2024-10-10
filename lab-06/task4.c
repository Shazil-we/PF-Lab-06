#include <stdio.h>
#include <math.h>
int main(){
  int num=0,len=0,sum = 0 , temp = 0 , i = 1, checker=10 , j=0 , digit = 0 , cube = 0;
  printf("Enter a number: ");
  scanf("%d" , &num);
  while(i!=0){
    temp = num; //153
    if(temp/checker == 0){
      len = i;
      i=0;
    }else{
      i++;
      checker = checker*10;
    }
  }    
  temp = num;
  for(i=0; i<len; i++){
    digit = temp%10;
    temp = temp/10;
    cube = pow(digit , len);
    sum = sum + cube;
    printf("DIGIT: %d\n",digit);
    printf("CUBE: %d\n" , cube);
    printf("SUM: %d\n" , sum);
  }
  if(sum == num){
    printf("The number is an armstrong number");
  }else{
    printf("The number is not an armstrong number");
  }
}