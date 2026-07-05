#include <stdio.h>
int main()
{
    // TAKE 3 NUMBERS INPUT AND TELL IF THEY CAN BE SIDES OF TRIANGLE
    // RULE = SUM OF 2 SIDES HAVE TO BE GREATER THAN THIRD SIDE
   int x,y,z;
   printf("ENTER THE FIRST NUMBER : ");
   scanf("%d",&x);
   printf("ENTER THE SECOND NUMBER : ");
   scanf("%d",&y);
   printf("ENTER THE THIRD NUMBER : ");
   scanf("%d",&z);

   if(x + y > z && y + z > x && x + z > y){
    printf("YES %d, %d and %d CAN FORM TRIANGLE",x,y,z);
   }
   else{
    printf("NO %d, %d and %d CANNOT FORM A TRIANGLE",x,y,z);
   }
    return 0;
}