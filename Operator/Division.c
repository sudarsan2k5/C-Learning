# include <stdio.h>

int main(){
    int il = 10;
    int i2 = 3;
    int quotient, remainder;
    quotient = il / i2;
    remainder = il % i2;
    
    float f1 = 3.0;
    float f2 = 2.0;
    float result;
    result = f1 / f2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    printf("Result = %.1f\n", result);
    return 0;
}