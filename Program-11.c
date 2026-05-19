//Get a three-digit number from the user and print the sum of the digits.
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    b=(a/100)%10;
    c=(a/10)%10;
    d=a%10;
    printf("Sum of the Digit = %d",b+c+d);
    return 0;
}