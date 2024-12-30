#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int s1, s2;
    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &s1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &s2);
    
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", s1, s2, ucln(s1, s2));
    
    return 0;
}

