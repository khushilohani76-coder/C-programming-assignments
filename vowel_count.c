#include <stdio.h>
int main(){
    char ch;
    int count = 0;

    printf("Enter the character:");
    
    while((ch = getchar()) != '\n'){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){

            count++;
        }
    }

    printf("The number of vowels : %d", count);

    return 0;
}