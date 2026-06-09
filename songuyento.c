#include <stdio.h>
#include <math.h> // Thư viện để dùng hàm sqrt()

int main() {
    int n;
    int laSoNguyenTo = 1; // Giả sử Ban đầu n là số nguyên tố (1: True)

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2) {
        laSoNguyenTo = 0; // Số nhỏ hơn 2 không phải số nguyên tố
    } else {
        // Vòng lặp kiểm tra từ 2 đến căn bậc hai của n
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                laSoNguyenTo = 0; // Tìm thấy ước số khác, không phải số nguyên tố
                break;            // Thoát vòng lặp ngay lập tức để tối ưu
            }
        }
    }

    // In kết quả
    if (laSoNguyenTo == 1) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}