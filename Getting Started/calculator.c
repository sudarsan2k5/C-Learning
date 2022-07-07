#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Enter First Num: ");
    scanf("%d", &a);

    printf("Enter Second Num: ");
    scanf("%d", &b);
    
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
}
