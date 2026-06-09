#include <stdio.h>

// Hàm đệ quy tính n giai thừa
long long giaiThua(int n) {
    // Điều kiện dừng
    if (n == 0 || n == 1) {
        return 1;
    }
    // Bước đệ quy
    return n * giaiThua(n - 1);
}

int main() {
    int n;
    printf("Nhap n (0 <= n <= 20): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap n >= 0\n");
    } else if (n > 20) {
        printf("Ngoai vi tri tinh toan kieu long long (n nen <= 20)\n");
    } else {
        printf("%d! = %lld\n", n, giaiThua(n));
    }

    return 0;
}