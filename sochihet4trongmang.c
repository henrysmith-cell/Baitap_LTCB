#include <stdio.h>

int main() {
    int n;
    int tong = 0;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac so chia het cho 4 trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 4 == 0) {
            printf("%d ", a[i]);
            tong += a[i]; // Cong don vao bien tong
        }
    }

    printf("\nTong cua cac so chia het cho 4 la: %d\n", tong);

    return 0;
}