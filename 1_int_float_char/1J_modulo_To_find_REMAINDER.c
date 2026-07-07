#include <stdio.h>
int main()
{
int a,b;
printf("TYPE THE DIVIDEND : ");
scanf("%d",&a);
printf("TYPE THE DIVISOR : ");
scanf("%d",&b);

int r = a % b; // IF a is smaller than b THEN THE ANSWER IS a
printf("THE REMAINDER WHEN %d IS DIVIDED BY %d IS : %d" ,a,b,r);

    return 0;
}