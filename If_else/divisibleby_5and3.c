#include <stdio.h>
int main ()
{
    // TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 AND 3
    int x;
    printf("ENTER THE POSITIVE INTEGER : ");
    scanf("%d",&x);

    if(x%3==0 && x%5==0){
        printf("YES THE NUMBER IS DIVISIBLE BY BOTH 5 AND 3");
    }
    else{
        printf("NO THE NUMBER IS NOT DIVISIBLE BY 5 AND 3");
    }
    return 0;
}