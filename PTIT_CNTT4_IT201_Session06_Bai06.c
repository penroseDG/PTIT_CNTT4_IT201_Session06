//
// Created by dudan on 27/06/2025.
//
#include <stdio.h>

int demCachLeo(int n) {
    if (n == 0 || n == 1)
        return 1;
    return demCachLeo(n - 1) + demCachLeo(n - 2);
}

int main() {
    int n;
    printf("nhap so bat ky vao day : ");
    scanf("%d", &n);

    printf("%d\n", demCachLeo(n));
    return 0;
}
