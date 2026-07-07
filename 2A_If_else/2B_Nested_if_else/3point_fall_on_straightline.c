// GIVEN THREE POINTS X1Y1 X2Y2 X3Y3 write a program to check if they fall on one straight line
// SLOPE AB = SLOPE BC
#include <stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("ENTER X1 : ");
    scanf("%f",&x1);
    printf("ENTER Y1 : ");
    scanf("%f",&y1);
    printf("ENTER X2 : ");
    scanf("%f",&x2);
    printf("ENTER Y2 : ");
    scanf("%f",&y2);
    printf("ENTER X3 : ");
    scanf("%f",&x3);
    printf("ENTER Y3 : ");
    scanf("%f",&y3);

     float slopeA = (y2-y1)/(x2-x1);
     float slopeB = (y3-y1)/(x3-x1);
    
if(slopeA==slopeB){
    printf("YES THEY FALL ON STRAIGHT LINE");
}
else{
    printf("NO THE POINTS DOESNT FALL ON THE STRAIGHT LINE");
}
    return 0;
}