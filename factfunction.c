#include<stdio.h>
#include<math.h>
int fact(int n);
int fact(int n){
    int i,k=1;
    for(i=1;i<=n;i++){
        k=k*i;
    }

return k;
}


int main(){
    int n;
    long int f;
    printf("enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial is=%ld",f);
    
    return 0;
}
