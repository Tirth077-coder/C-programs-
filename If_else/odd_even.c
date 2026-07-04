#include <stdio.h>
int main()
{
    int x;
    printf("ENTER THE POSITIVE INTGER :");
    scanf("%d",&x);
    if(x%2==0){
     printf("THE NUMBER IS EVEN");
    }
    if(x%2!=0){
        printf("THE NUMBER IS ODD");
    }
    return 0;
}