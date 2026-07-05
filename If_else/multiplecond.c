#include <stdio.h>
int main()
{
    //take positive integer input and tell if it is a three digit number or not 
   int x;
   printf("ENTER THE POSITIVE INTEGER : ");
   scanf("%d",&x);
   
   if(x>99 && x<1000){
    printf("YES IT IS A 3 DIGIT NUMBER");
   }
   else{
    printf("NO IT'S NOT A 3 DIGIT NUMBER");
   }
    return 0;

}