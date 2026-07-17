#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
        return n*factorial(n-1);
}
       int main(){
        printf("%d",factorial(10));
        return 0;
       }