#include <stdio.h>

int main() {
    int n;
    long long giaiThua = 1;

    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so lon hon hoac bang 0.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            giaiThua *= i; // Tuong duong: giaiThua = giaiThua * i
        }
        printf("Giai thua cua %d (%d!) la: %lld\n", n, n, giaiThua);
    }

    return 0;
}