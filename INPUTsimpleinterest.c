#include <stdio.h>
int main()
{
 float p,r,t;   
 printf("ENTER PRINCIPAL : ");
scanf("%f",&p);
printf("ENTER RATE : ");
scanf("%f",&r);
printf("ENTER TIME :");
scanf("%f",&t);

float si = p*r*t/100;
printf("YOUR INTEREST IS ");
printf("%f",si);
    return 0;

}
