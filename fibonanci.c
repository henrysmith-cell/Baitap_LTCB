#include <stdio.h>

// Hàm đệ quy tìm số Fibonacci thứ n
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap vi tri n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap n >= 0\n");
    } else {
        printf("So Fibonacci thu %d la: %d\n", n, fibonacci(n));
    }

    return 0;
}