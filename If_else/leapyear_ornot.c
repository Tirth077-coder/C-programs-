#include <stdio.h>
int main()
{
    int x;
    printf("ENTER THE YEAR : ");
    scanf("%d",&x);

    if(x%4==0){
        printf("YES, IT IS A LEAP YEAR");
    }
    else{
        printf("NO, IT'S NOT A LEAP YEAR");
    }
    return 0;
}