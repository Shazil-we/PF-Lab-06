#include <stdio.h>
int main(){
    int t1 = 0, t2 = 1, nextTerm , num;
    printf("Enter a number: ");
    scanf("%d" , &num);
    printf("Fibonacci series up to %d: ", num);
    for (int i = 1; i <= num; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (t1 > num)  
            break;
    }
    printf("\n");
}
