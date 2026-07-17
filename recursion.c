#include<stdio.h>
void countdown(int n)
{
    if(n == 0){
    printf("blast off\n");
    return;
    }
        printf("%d\n", n);
        countdown(n - 1);
    
}
int main()
{
    int num;
    printf("Enter a number to start countdown: ");
    scanf("%d", &num);
    countdown(num);
    return 0;
}