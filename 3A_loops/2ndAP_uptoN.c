#include <stdio.h>
int main()
{
    // DISPLAY THIS AP 4,7,10,13 upto n
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    // initialization - condition - increment
    // FORMULA An = a + (n-1)d
    // A = 4 , D = 3 an = a + (n-1)d = 4 + 3n -3
    for(int i = 4;i<=3*n+1;i = i + 3){
        printf("%d ",i);
    }
    return 0;
}