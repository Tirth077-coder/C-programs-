#include <stdio.h>
int main()
{
float x;
printf("TYPE THE REAL NUMBER : ");
scanf("%f",&x);

int y;
printf("TYPE THE INTGER NUMBER : ");
scanf("%d",&y);

float z = x - y;
printf("THE FRACTIONAL PART OF %f IS : %f",x,z);

    return 0;
}