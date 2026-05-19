//Get a three-digit number from the user and print the ten's digit.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    a=a/10;
    printf("Hunderd's Digit = %d",a%10);
    return 0;
}