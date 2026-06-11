#include <stdio.h>

int main() {
    int n;
    int a[100]; // Khai báo mảng tối đa 100 phần tử

    printf("Nhap so luong phan tu cua mang (n <= 100): ");
    scanf("%d", &n);

    // Vòng lặp nhập dữ liệu cho mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Thuật toán tìm Max
    int max = a[0]; // Giả sử phần tử đầu tiên là lớn nhất
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; // Cập nhật lại max mới
        }
    }

    printf("\nGia tri lon nhat trong mang la: %d\n", max);
    return 0;
}