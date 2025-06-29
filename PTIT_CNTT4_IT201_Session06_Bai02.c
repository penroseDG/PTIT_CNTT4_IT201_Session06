//
// Created by dudan on 27/06/2025.
//
//
// Created by dudan on 27/06/2025.
//
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("nhap so hien thi o day : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input không hợp lệ\n");
        return 0;
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d", fibonacci(i));
        if (i > 0) printf(", ");
    }

    printf("\n");
    return 0;
}
