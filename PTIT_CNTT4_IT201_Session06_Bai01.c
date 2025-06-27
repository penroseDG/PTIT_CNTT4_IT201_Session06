#include <stdio.h>

void chuyenNhiPhan(int n) {
    if (n == 0) return;
    chuyenNhiPhan(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } else {
        chuyenNhiPhan(n);
        printf("\n");
    }

    return 0;
}