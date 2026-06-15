#include <stdio.h>

int main() {
    int n;
    int a[100];
    int tongChan = 0;
    int demChan = 0;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Vòng lặp duyệt mảng để lọc số chẵn
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            tongChan += a[i];
            demChan++;
        }
    }

    // Kiểm tra tránh lỗi chia cho 0 nếu mảng không có số chẵn nào
    if (demChan > 0) {
        float trungBinh = (float)tongChan / demChan; // Ép kiểu sang float để ra số thập phân
        printf("\nTrung binh cong cac so chan la: %.2f\n", trungBinh);
    } else {
        printf("\nMang khong co so chan nao.\n");
    }

    return 0;
}