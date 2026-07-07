#include <stdio.h>
int main()
{
    int x;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&x);

    if(x%5==0 || x%3==0){
        if(x%15!=0){
            printf("%d IS DIVIBLE BY 5 OR 3 BUT NOT 15",x);
        }
        else{
            printf("%d IS NOT DIVISIBLE BY 5 OR 3 AND NOT 15",x);
        }
    }
    else{
        printf("%d IS NOT DIVISIBLE BY 5 OR 3 AND NOT 15",x);
    }
    return 0;
}