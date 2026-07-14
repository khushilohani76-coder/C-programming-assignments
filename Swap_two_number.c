#include<stdio.h>
int main(){
    int a,l,temp;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&l);
    printf("\nbefore swapping:\n");
    printf("A=%d\n",a);
    printf("B=%d\n",l);
    temp=a;
    a=l;
    l=temp;
    printf("\nafter swapping:\n");
    printf("A=%d\n",a);
    printf("B=%d\n",l);
    return 0;
}