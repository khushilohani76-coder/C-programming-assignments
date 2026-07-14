#include<stdio.h>
int main(){
    float a,celsius;
    printf("enter temperature in fahrenheit:");
    scanf("%f",&a);
    celsius=(a-32)*5/9;
    printf("temperture in celsius:%f",celsius);
    return 0;
}