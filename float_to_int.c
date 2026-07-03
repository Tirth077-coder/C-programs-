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
printf("THE FRACTIONAL PART IS : %f",z);

    return 0;
}