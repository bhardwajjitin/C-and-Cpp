#include <stdio.h>
#include<math.h>
int main(){
    float a,c;
    printf("Enter the units consumed");
    scanf("%f",&a);
    if(a>0 && a<200){(c=a*3);
    printf("your bill is=%f",c);
    }
    else if(a>201 && a<400){
        (c=a*4.5);
        printf("your bill is=%f",c);
    }
    else if(a>401 && a<800){
        (c=a*6.5);
        printf("your bill is=%f",c);
    }
    else if(a>801 && a<1200){
        (c=a*7);
        printf("your bill is=%f",c);
    }
    else{
        (c=a*8);
        printf("your bill is=%f",c);
    }
    return 0;

}