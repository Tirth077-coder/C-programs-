#include <stdio.h>
int main()
{
    // type a number input which is divisible by both 5 and 3
    int x;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);

    if(x%5==0){
        if(x%3==0){
            printf("YES %d IS DIVISIBLE BY 5 AND 3",x);
        }
         else{
        printf("NO %d IS NOT DIVISIBLE BY 5 AND 3",x);
    }
    }
    else{
        printf("NO %d IS NOT DIVISIBLE BY 5 AND 3",x);
    }
    return 0;
}