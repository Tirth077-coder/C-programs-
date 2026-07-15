#include <stdio.h>
int main()
{
    // display this AP 1,3,5,7 upto N terms 
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    // INITIALIZATION - CONDITION - INCREMENT 
    // FORMULA TO FIND N TERMS IS 2*N-1
    for(int i = 1;i<=2*n-1;i = i +2){
        printf("%d ",i);
    }
    return 0;
}