//
// Created by dudan on 27/06/2025.
//
#include <stdio.h>

void chuyenDia(int n, char nguon, char trungGian, char dich) {
    if (n == 1) {
        printf("dia 1 di chuyen tu %c sang %c\n", nguon, dich);
        return;
    }
    chuyenDia(n - 1, nguon, dich, trungGian);
    printf("dia %d di chuyen tu %c sang %c\n", n, nguon, dich);
    chuyenDia(n - 1, trungGian, nguon, dich);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf(" khong dung \n");
        return 0;
    }

    chuyenDia(n, 'A', 'B', 'C');
    return 0;
}
