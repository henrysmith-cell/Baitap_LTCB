#include <stdio.h>

int main() {
    int n, tong = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    printf("Tong tu 1 den %d = %d\n", n, tong);

    return 0;
}
