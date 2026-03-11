/* Any integer is input through the keyboard. Write a program to 
find out whether it is an odd number or even number. */

#include<stdio.h>

int main()
{
    int number;

    printf("Enter any integer = ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("The number is EVEN\n");
    }
    else
    {
        printf("The number is ODD\n");
    }

    return 0;
}

