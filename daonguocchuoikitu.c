#include <stdio.h>
#include <string.h> // Thư viện để sử dụng hàm strlen() lấy độ dài chuỗi

int main() {
    char s[100];

    printf("Nhap vao mot chuoi: ");
    // Sử dụng fgets thay vì scanf để đọc được cả khoảng trắng (space)
    fgets(s, sizeof(s), stdin); 

    // Loại bỏ ký tự xuống dòng '\n' do fgets tự động nhận vào khi bấm Enter
    s[strcspn(s, "\n")] = '\0';

    int doDai = strlen(s);

    printf("Chuoi dao nguoc la: ");
    // Vòng lặp chạy ngược từ cuối chuỗi về đầu chuỗi
    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}