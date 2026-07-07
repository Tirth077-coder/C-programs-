#include <stdio.h>
int main()
{
    // TAKE INPUT PERCENTAGE OF A STUDENT AND PRINT GRADE
    // 91 T0 100 excellent - 81 to 90 very good - 71 to 80 good - 61 to 70 can do better - 51 to 60 average
    // 41 to 50 below average - less than 40 fail

    int x;
    printf("ENTER YOUR MARKS : ");
    scanf("%d",&x);

    if(x>=90){
        printf("EXCELLENT");
    }
    else if(x>=80){
        printf("VERY GOOD");
    }
    else if(x>=70){
        printf("GOOD");
    }
    else if(x>=60){
        printf("CAN DO BETTER");
    }
    else if(x>=50){
        printf("ABOVE AVERAGE");
    }
    else if(x>=40){
        printf("AVERAGE");
    }
    else {
        printf("FAIL");
    }
   return 0;
}