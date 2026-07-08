#include <stdio.h>
int main()
{
    // GIVEN A POINT X,Y AND FIND IT LIES ON X AXIS, Y AXIS OR ORIGIN
    float x,y;
    printf("ENTER THE X COORDINATE : ");
    scanf("%f",&x);
    printf("ENTER THE Y COORDINATE : ");
    scanf("%f",&y);
    
    if(x==0 && y==0){
        printf("lies on origin");
    }
    else if(x==0){
        printf("lies on y axis");
    }
    else if(y==0){
        printf("lies on x axis");
    }
    else{
        printf("no x axis no y axis and no origin");
    }
    return 0;
}