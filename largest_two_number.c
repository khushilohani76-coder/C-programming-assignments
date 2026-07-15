#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is largest numbers",a);
    }
    else{
        printf("%d is largest numbers",b);
    }
    return 0;
}