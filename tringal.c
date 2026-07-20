#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

    if(a+b>=c && b+c>=a && c+a>=b){
        printf("valid tringle");
    }
    else{
        printf("not a valid tringle");
    }
    return 0;
}