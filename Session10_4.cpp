#include <stdio.h>

int main() {
    int arr[] = {9, 1, 3, 7, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    for (int i = 0; i < n - 1; i++) {
        int min_index = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j; 
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

