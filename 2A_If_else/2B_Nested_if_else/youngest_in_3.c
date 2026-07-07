#include <stdio.h>
int main()
{
    // IF THE AGES OF RAM SHYAM AND AJAY ARE INPUT THEN FIND THE YOUNGEST OF THEM

int ram,shyam,ajay;
printf("ENTER THE AGE OF RAM : ");
scanf("%d",&ram);
printf("ENTER THE AGE OF SHYAM : ");
scanf("%d",&shyam);
printf("ENTER THE AGE OF AJAY : ");
scanf("%d",&ajay);

if(ram<shyam){
    if(ram<ajay){
    printf("RAM IS THE YOUNGEST");
    }
    else{
        printf("AJAY IS THE YOUNGEST");
    
    }
}
else{
    if(shyam<ram){
        if(shyam<ajay){
        printf("SHYAM IS THE YOUNGEST");
    }
    else{
    printf("AJAY IS THE YOUNGEST");
    }
}
else{
    printf("AJAY IS THE YOUNGEST");
}
}
    return 0;
}
