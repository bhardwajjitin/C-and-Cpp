#include<stdio.h>

int main()
{
int i,n;
printf("enter the range of series=");
scanf("%d",&n);
double fibonacci[n];
fibonacci[0] = 0;
fibonacci[1] = 1;
for(i=2;i<n;i++){
fibonacci[i]=fibonacci[i-2] + fibonacci[i-1];
}
for( i=0;i<n;i++){
printf("Fibonacci[ %d ] = %.0f\n", i, fibonacci[i]);
}
return 0;
}