#include<stdio.h>
int main(){
    int arr[]={13,45,67,74,86,3};
    int n=6;
    int max=arr[0],min=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max = arr[i];
        if (arr[i]<min)
        min = arr[i];
    }
printf("maximum =%d\n",max);
printf("minimum =%d\n",min);
return 0;
    }

