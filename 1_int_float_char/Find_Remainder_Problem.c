#include <stdio.h>
int main()
{
int a,b;
printf("TYPE THE DIVIDEND : ");
scanf("%d",&a);
printf("TYPE THE DIVISOR : ");
scanf("%d",&b);
// divisor*quotient + remainder = dividend
// remainder = dividend - divisor*quotient
// r = a - b*q
int q = a/b;
int r = a - b*q;

printf("THE REMAINDER WHEN %d IS DIVIDED BY %d IS : %d", a,b,r);

    return 0;
}