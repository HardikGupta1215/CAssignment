#include <stdio.h>
#include <math.h>
#include "helpinghand.h"

int main() 
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    palin(number) ? printf("%d is a palindrome\n", number) : printf("%d is not a palindrome\n", number);
    return 0;
}