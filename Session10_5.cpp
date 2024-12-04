#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {-9, 3, 7, 1, 8, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x; 

    printf("Mang hien tai la:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap so nguyen can tim:");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, result);
    } else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    return 0;
}


