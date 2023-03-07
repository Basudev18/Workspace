#include <stdio.h>
int Swap(int *a, int *b, int *c);
int main() {
    int a, b, c;
    printf("Enter a, b c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
    Swap(&a, &b, &c);
    printf("After swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);
    return 0;
}
int Swap(int *n1, int *n2, int *n3) {
    int temp;
    temp = *n1;
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;
}