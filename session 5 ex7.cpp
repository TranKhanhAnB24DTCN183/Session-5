#include <stdio.h>


int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1; 
    }

    int result = UCLN(a, b);
    printf("UCLN cua %d va %d la: %d\n", a, b, result);
    
    return 0;
}

