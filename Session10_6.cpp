#include <stdio.h>

int main() {
    int arr[] = {8, 3, 6, 3, 6, 9, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x; 
    int positions[n]; 
    int index = 0;

    printf("Mang hien tai la:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[index] = i; 
            index++; 
        }
    }
    if (index > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri:", x);
        for (int i = 0; i < index; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }
    return 0;
}



