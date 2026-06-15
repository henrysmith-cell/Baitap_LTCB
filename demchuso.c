#include <stdio.h>

// Hàm đệ quy đếm số chữ số
int demChuSo(int n) {
    // Điều kiện dừng: nếu n chỉ còn 1 chữ số
    if (n < 10) {
        return 1;
    }
    // Bước đệ quy: 1 + số chữ số của phần còn lại
    return 1 + demChuSo(n / 10);
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    // Xử lý trường hợp người dùng nhập số âm
    int tam = (n < 0) ? -n : n;

    printf("So %d co %d chu so.\n", n, demChuSo(tam));
    return 0;
}