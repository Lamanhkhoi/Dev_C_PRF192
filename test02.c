#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str_num = "12345 la so";
    char *end; // Con trỏ để lưu vị trí kết thúc chuyển đổi
    long num = strtol(str_num, &end, 10); // 10 là hệ cơ số 10

    // Kiểm tra xem có ký tự nào được chuyển đổi không
    if (str_num == end) {
        printf("Chuoi '%s' khong the chuyen doi.\n", str_num);
    } else {
        printf("Da chuyen doi thanh so: %ld\n", num);
        printf("Phan con lai cua chuoi: \"%s\"\n", end);
    }
    return 0;
}