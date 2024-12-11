#include <stdio.h>

// Ham tim uoc chung lon nhat
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;

    // Nhap gia tri 2 so
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Tim uoc chung lon nhat
    int ketQua = ucln(so1, so2);

    // In ket qua
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", so1, so2, ketQua);

    return 0;
}

