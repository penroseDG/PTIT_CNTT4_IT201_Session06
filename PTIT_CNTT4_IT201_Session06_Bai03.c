//
// Created by dudan on 27/06/2025.
//
#include <stdio.h>

int tongChuSo(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + tongChuSo(n / 10);
}

int main() {
    int n;
    printf("nhap so bat ky : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input không hợp lệ\n");
        return 0;
    }

    printf("%d\n", tongChuSo(n));
    return 0;
}
