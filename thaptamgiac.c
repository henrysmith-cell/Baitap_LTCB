#include <stdio.h>

int main() {
    int h;
    printf("Nhap chieu cao thap (h): ");
    scanf("%d", &h);

    // Vòng lặp ngoài quản lý từng dòng (từ dòng 1 đến dòng h)
    for (int i = 1; i <= h; i++) {
        
        // Vòng lặp trong quản lý số dấu sao in ra trên dòng đó
        // Dòng i sẽ in ra đúng i dấu sao
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        // Sau khi in xong một dòng thì xuống hàng
        printf("\n");
    }

    return 0;
}