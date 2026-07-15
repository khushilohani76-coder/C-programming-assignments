#include<stdio.h>
int main(){
   int num;
   printf("enter a marks");
   scanf("%d",&num);
   if(num>=90){
         printf("%d is A grade",num);
    }
    else if(num>=80){
         printf("%d is B grade",num);
    }
    else if(num>=70){
         printf("%d is C grade",num);
    }
    else if(num>=60){
         printf("%d is D grade",num);
    }
    else{
         printf("%d is F grade",num);
    }
    return 0;
}