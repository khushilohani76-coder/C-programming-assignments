#include <stdio.h>
int main(){

    int arr[100] = {35, 77, 88, 56, 43};
    int i, n = 5;
    int temp = arr[0];

    for(i = 0; i < (n-1); i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    printf("Array after rotation:");
    for(i = 0; i < n; i++){
        printf("\t%d\t",arr[i]);
    }

    return 0;
}