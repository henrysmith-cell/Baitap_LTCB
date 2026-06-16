#include <stdio.h>

int main() {
    int n, soBanDau, chuSoCuoi;
    int soDaoNguoc = 0;

    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    soBanDau = n; // Lưu lại giá trị ban đầu để so sánh lúc sau

    // Vòng lặp xử lý tách từng chữ số từ phải sang trái
    while (n > 0) {
        chuSoCuoi = n % 10;                     // Lấy chữ số cuối cùng
        soDaoNguoc = soDaoNguoc * 10 + chuSoCuoi; // Đẩy chữ số cũ sang trái và cộng số mới vào
        n = n / 10;                             // Bỏ chữ số cuối cùng đã xử lý
    }

    printf("So dao nguoc la: %d\n", soDaoNguoc);

    // Kiểm tra tính đối xứng
    if (soBanDau == soDaoNguoc) {
        printf("%d la so doi xung (Palindrome).\n", soBanDau);
    } else {
        printf("%d khong phai la so doi xung.\n", soBanDau);
    }

    return 0;
}