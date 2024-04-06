#include<stdio.h>
#include<math.h>
int main(){
    int i,c=0,n;
    printf("enter the number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
            c=c+1;
        
    }
    if(c==2){
        printf("number is prime");

    }
    else{
        printf("number is not prime");
    }
return 0;
}