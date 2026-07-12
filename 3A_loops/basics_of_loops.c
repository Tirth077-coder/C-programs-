#include <stdio.h>
int main()
{
    // TOPIC 1 - FOR LOOP
    //      PRINT HELLO WORLD N TIMES take n as input from user
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    for(int x = 0;x<=n;x++){
        printf("HELLO WORLD\n");
    }
    return 0;
}