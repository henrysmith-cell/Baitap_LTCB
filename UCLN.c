#include <stdio.h>

// Hàm đệ quy tìm UCLN của 2 số a và b
int timUCLN(int a, int b) {
    if (b == 0) {
        return a; // Điều kiện dừng
    }
    return timUCLN(b, a % b); // Bước đệ quy
}

int main() {
    int a, b;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);

    // Sử dụng hàm abs() hoặc tự kiểm tra để đảm bảo số dương
    int x = (a < 0) ? -a : a;
    int y = (b < 0) ? -b : b;

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, timUCLN(x, y));
    return 0;
}