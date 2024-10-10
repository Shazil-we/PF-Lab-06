#include <stdio.h>

int main() {
    int number, rev_number = 0, l_digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        l_digit = number % 10;
        rev_number = rev_number * 10 + l_digit;
        number /= 10;
    } while (number != 0);
    printf("Reversed Number: %d\n", rev_number);
    return 0;
}
