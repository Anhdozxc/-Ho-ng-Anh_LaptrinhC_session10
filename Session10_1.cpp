#include <stdio.h>

int main() {
    int arr[] = {1, 5, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x;
    
    printf("Moi ban nhap phan tu can tim: ");
    scanf("%d", &x);

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d ton tai o vi tri: %d\n", x, i);
            return 0; 
        }
    }

    printf("Phan tu %d khong ton tai trong mang.\n", x);

    return 0;
}


