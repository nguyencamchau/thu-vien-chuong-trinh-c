#include <stdio.h>
int main(void) 
{
    int a, b;
    printf("Nhap a va b: ");
    if (scanf("%d%d", &a, &b) != 2) 
    {
        printf("Du lieu khong hop le.\n");
        return 1;
    }
    printf("Tong = %d\n", a + b);
    return 0;
}
