#include<stdio.h>
int main(){
    char a;
    printf("Enter the alphabet = ");
    scanf("%c",&a);
    if (a>='A' && a<='Z') {
        printf("yes it is uppercase");
    }
    else{
        printf("no it is not uppercase");
    }
    return 0;
}
