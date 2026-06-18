#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    char kyTu;
    int dem = 0;

    // Xoa bo nho dem va nhap chuoi (co chua khoang trang)
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin); 

    printf("Nhap vao ky tu can dem: ");
    scanf(" %c", &kyTu); // Luu y co khoang trang truoc %c de tranh nuot ky tu

    // Duyet qua tung ky tu cua chuoi
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}