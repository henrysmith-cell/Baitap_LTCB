#include <stdio.h>
#include <stdlib.h> // Thu vien de dung ham abs() lay gia tri tuyet doi

// Ham tim Uoc so chung lon nhat cua 2 so a va b
int timUCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    // Thuat toan Euclid
    while (b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}

int main() {
    int x, y;
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);

    int ucln = timUCLN(x, y);

    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, ucln);

    return 0;
}