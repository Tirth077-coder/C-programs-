#include <stdio.h>
int main()
{
    // TAKE 3 POSITIVE INTEGERS INPUT AND TAKE GREATEST OF THEM
    int x, y, z;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d", &x);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d", &y);
    printf("ENTER THE THIRD NUMBER : ");
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("THE GREATEST NUMBER IS %d", x);
    }
    if (y > x && y > z)
    {
        printf("THE GREATEST NUMBER IS %d", y);
    }
    if (z > x && z > y)
    {
        printf("THE GREATEST NUMBER IS %d", z);
    }
    return 0;
}