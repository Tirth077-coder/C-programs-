#include <stdio.h>
int main()
{
    int x;
    printf("TYPE THE NUMBER : ");
    scanf("%d",&x);

    float y = x/2.0;
    printf("THE HALF OF THE %d IS : %f" ,x,y);
    return 0;
}