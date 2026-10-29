#include <stdio.h>
#include <string.h>
#include <windows.h> // Thư viện hiển thị tiếng Việt trên Windows

int main()
{
    // Thiết lập hiển thị tiếng Việt UTF-8 cho console
    SetConsoleOutputCP(65001);

    char s[100];
    int length_all = 0;
    int length_no_space = 0;
    int i = 0;

    printf("Nhập vào một chuỗi ký tự: ");
    // Sử dụng fgets để nhập được chuỗi có dấu cách (khoảng trắng)
    fgets(s, sizeof(s), stdin);

    // Loại bỏ ký tự xuống dòng '\n' do fgets tự động thêm vào ở cuối chuỗi
    s[strcspn(s, "\n")] = '\0';

    // Vòng lặp duyệt qua từng ký tự cho đến khi gặp ký tự kết thúc chuỗi '\0'
    while (s[i] != '\0')
    {
        length_all++; // Đếm tất cả ký tự

        // Nếu ký tự hiện tại không phải là khoảng trắng, tab hay xuống dòng
        if (s[i] != ' ' && s[i] != '\t')
        {
            length_no_space++; // Đếm ký tự thực tế
        }
        i++;
    }

    // In kết quả ra màn hình
    printf("\n--- Kết quả đếm ký tự ---\n");
    printf("Tổng số ký tự (tính cả khoảng trắng): %d\n", length_all);
    printf("Số ký tự thực tế (không tính khoảng trắng): %d\n", length_no_space);

    return 0;
}
