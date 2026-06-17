#include <stdio.h>

int main() {
    int n;
    int dem = 0; // Bien de dem xem co bao nhieu so chia het cho 4

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap so n lon hon hoac bang 1.\n");
    } else {
        printf("Cac so chia het cho 4 trong khoang tu 1 den %d la:\n", n);
        
        for (int i = 1; i <= n; i++) {
            // Kiem tra neu i chia het cho 4 (so du bang 0)
            if (i % 4 == 0) {
                printf("%d ", i);
                dem++; // Tang bien dem len 1
            }
        }
        
        printf("\n\nTong cong co %d so chia het cho 4.\n", dem);
    }

    return 0;
}