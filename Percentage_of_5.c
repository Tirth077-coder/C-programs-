#include <stdio.h>
int main()
{
    float maths = 90;
    float physics = 89;
    float chemistry = 85;
    float computer = 96;
    float english = 98;

    float p = (maths + physics + chemistry + computer + english)/500*100;
    printf("YOUR PERCENTAGE IS : ");

    printf("%f",p);


    return 0;

}