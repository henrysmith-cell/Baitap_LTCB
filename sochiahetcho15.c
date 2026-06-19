#include <stdio.h>

int main() {
    int a, b;
    int coSoNao = 0; // Bien danh dau xem co tim thay so nao khong

    printf("Nhap vao khoang bat dau (a): ");
    scanf("%d", &a);
    printf("Nhap vao khoang ket thuc (b): ");
    scanf("%d", &b);

    // Neu nguoi dung nhap a > b, ta hoan vi de a luon nho hon b
    if (a > b) {
        int tam = a;
        a = b;
        b = tam;
    }

    printf("\nCac so chia het cho 15 trong khoang [%d, %d] la:\n", a, b);
    for (int i = a; i <= b; i++) {
        // i chia het cho 15 tuong duong i chia het cho 3 VA i chia het cho 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            coSoNao = 1; // Đánh dấu là có tìm thấy
        }
    }

    if (coSoNao == 0) {
        printf("Khong co so nao chia het cho 15 trong khoang nay.\n");
    }
    printf("\n");

    return 0;
}