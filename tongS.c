#include <stdio.h>

int main() {
    int n;
    int tong = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    // Sử dụng vòng lặp để tính tổng từ 1 đến n
    for (int i = 1; i <= n; i++) {
        tong += i; // tuong duong voi tong = tong + i;
    }

    printf("Tong S = 1 + 2 + ... + %d la: %d\n", n, tong);

    return 0;
}