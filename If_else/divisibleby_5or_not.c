#include <stdio.h>
int main()
{
    // take positive integer as input and tell if it is divisible by 5 or nor

    int x;
    printf("ENTER POSITIVE INTEGER : ");
    scanf("%d",&x);

    if(x%5==0){
        printf("YES, THE NUMBER IS DIVISIBLE BY 5");
    }
    else{
        printf("NO, THE NUMBER IS NOT DIVISIBLE BY 5");
    }
    return 0;
}