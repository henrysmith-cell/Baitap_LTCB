#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Thuat toan dao nguoc mang
    // Chay tu dau mang den giua mang, hoan vi phan tu dau va phan tu cuoi tuong ung
    for (int i = 0; i < n / 2; i++) {
        int tam = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tam;
    }

    printf("\nMang sau khi dao nguoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}