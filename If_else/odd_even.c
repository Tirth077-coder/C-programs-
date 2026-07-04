#include <stdio.h>
int main()
{
    // Take a positve integer as input and tell if it is even or odd
int x;
printf("ENTER A POSITIVE INTEGER : ");
scanf("%d",&x);
if(x%2==0){
printf("THE NUMBER IS EVEN");
}
if(x%2!=0){
    printf("THE NUMBER IS ODD");
}
    return 0;
}