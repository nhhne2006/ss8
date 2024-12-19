#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int j = 0; j < 5; j++) {
    printf("Nhap phan tu cua mang thu %d la: ", j);
    scanf("%d", &arr[j]);}

    printf("Cac phan tu cua mang theo thu tu nguoc la: ");
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
