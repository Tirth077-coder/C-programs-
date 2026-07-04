#include <stdio.h>
int main()
{
    float l,b;
    printf("ENTER THE LENTGH : ");
    scanf("%f",&l);
    printf("ENTER THE BREADTH : ");
    scanf("%f",&b);
    float area = l*b;
        float perimeter = (l + b)*2;

    if(area>perimeter){
        
        printf("YES, THE AREA OF RECTANGLE IS GREATER THAN IT'S PERIMETER");
        printf("\nTHE AREA IS : %f",area);
        printf("\nHE PERIMETER IS : %f",perimeter);
    }
    else{
        printf("NO, THE AREA OF RECTANGLE IS NOT GREATER THAN IT'S PERIMETER");
        printf("\nTHE AREA IS : %f",area);
        printf("\nTHE PERIMETER IS : %f",perimeter);
    }

    return 0;
}