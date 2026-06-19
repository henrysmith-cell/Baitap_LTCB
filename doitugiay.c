#include <stdio.h>

int main() {
    long long tongGiay;
    int ngay, gio, phut, giay;

    printf("Nhap vao tong so giay: ");
    scanf("%lld", &tongGiay);

    if (tongGiay < 0) {
        printf("So giay khong duoc am!\n");
    } else {
        // Tinh so ngay va lay so giay con du lai
        ngay = tongGiay / 86400;
        long long giayConLai = tongGiay % 86400;

        // Tu so giay con du, tinh so gio va lay so giay du tiep theo
        gio = giayConLai / 3600;
        giayConLai = giayConLai % 3600;

        // Tinh so phut va so giay cuoi cung
        phut = giayConLai / 60;
        giay = giayConLai % 60;

        // In ket qua ra man hinh
        printf("\nKet qua chuyen doi:\n");
        printf("%lld giay = %d ngay, %d gio, %d phut, %d giay.\n", tongGiay, ngay, gio, phut, giay);
    }

    return 0;
}