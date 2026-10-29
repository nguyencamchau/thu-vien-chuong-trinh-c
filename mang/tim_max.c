#include <stdio.h>

int main()
{
    int n, i;

    // Nhập số lượng phần tử của dãy
    printf("Nhập số lượng phần tử của dãy: ");
    scanf("%d", &n);

    // Kiểm tra điều kiện số lượng phần tử hợp lệ
    if (n <= 0)
    {
        printf("Số lượng phần tử không hợp lệ!\n");
        return 1;
    }

    int a[n]; // Khai báo mảng gồm n phần tử

    // Nhập các phần tử của dãy
    for (i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Thuật toán tìm Max
    int max = a[0]; // Giả định phần tử đầu tiên là Max
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i]; // Cập nhật Max nếu tìm thấy số lớn hơn
        }
    }

    // In kết quả
    printf("\nGiá trị lớn nhất trong dãy là: %d\n", max);

    return 0;
}
