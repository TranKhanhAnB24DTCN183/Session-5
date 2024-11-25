#include <stdio.h>
   
   int main() {
    int n;  
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);  

    
    if (n < 0) {
        n =n*(-1);  
    }

    if (n == 0) {
        printf("Chu so duy nhat la: 0\n");
    } else {
        while (n > 0) {
            int digit = n % 10;  
            printf("%d ", digit); 
            n = n / 10;  
        }
        printf("\n");
    }

    return 0;
}

