#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, choice;
    int min, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nChoose Sorting Method:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:     // Bubble Sort
            for(i = 0; i < n - 1; i++) {
                for(j = 0; j < n - i - 1; j++) {
                    if(arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("\nArray after Bubble Sort:\n");
            break;

        case 2:     // Selection Sort
            for(i = 0; i < n - 1; i++) {
                min = i;
                for(j = i + 1; j < n; j++) {
                    if(arr[j] < arr[min])
                        min = j;
                }

                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
            printf("\nArray after Selection Sort:\n");
            break;

        case 3:     // Insertion Sort
            for(i = 1; i < n; i++) {
                key = arr[i];
                j = i - 1;

                while(j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }

                arr[j + 1] = key;
            }
            printf("\nArray after Insertion Sort:\n");
            break;

        default:
            printf("Invalid Choice!");
            return 0;
    }

    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}