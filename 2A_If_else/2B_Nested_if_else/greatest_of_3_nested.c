#include <stdio.h>
int main()
{
int x,y,z;
printf("ENTER THE FIRST NUMBER : ");
scanf("%d",&x);
printf("ENTER THE SECOND NUMBER : ");
scanf("%d",&y);
printf("ENTER THE THIRD NUMBER : ");
scanf("%d",&z);

if(x>y){
    if(x>z){
        printf("%d IS THE GREATEST",x);
    }
    else{
        if(z>x){
            printf("%d IS THE GREATEST",z);
        }
    }
}
else{
    if(y>z){
        printf("%d IS THE GREATEST",y);
    }
    else{
        printf("%d IS THE GREATEST",z);
    }
}


    return 0;
}