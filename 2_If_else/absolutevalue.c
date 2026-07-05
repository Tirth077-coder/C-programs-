#include <stdio.h>
int main()
{
    // take integer input and print the absolute value of that integer
// positive ne positive, negative ne positive, zero ne zero
    int x;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&x);

    if(x<0){
        x = x*(-1);
        printf("%d",x);
    }
    else{
         printf("%d",x);
    }
    return 0;
}