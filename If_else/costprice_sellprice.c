#include <stdio.h>
int main()
{
    float cp;
    float sp;
    printf("ENTER COST PRICE : ");
    scanf("%f",&cp);
    printf("ENTER SELL PRICE : ");
    scanf("%f",&sp);

    if(sp>cp){
    float p = sp-cp;
        printf("SELLER HAS MADE PROFIT");
        printf("\nTHE PROFIT IS : %f",p);
    }
    else{
        float l = sp-cp;
        printf("SELLER HAS MADE LOSS");
        printf("\nTHE LOSS IS : %f",l);
    }
    return 0;
}