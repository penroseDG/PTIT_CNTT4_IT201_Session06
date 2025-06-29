//
// Created by dudan on 27/06/2025.
//
#include <stdio.h>

int timMin(int a[], int n) {
    if (n == 1)
        return a[0];
    int minConLai = timMin(a, n - 1);
    return (a[n - 1] < minConLai) ? a[n - 1] : minConLai;
}

int timMax(int a[], int n) {
    if (n == 1)
        return a[0];
    int maxConLai = timMax(a, n - 1);
    return (a[n - 1] > maxConLai) ? a[n - 1] : maxConLai;
}

int main() {
    int a[100], n;
    printf("nhap vao so phan tu : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = timMin(a, n);
    int max = timMax(a, n);

    printf("%d, %d\n", min, max);
    return 0;
}
