#include "stdio.h"

int main(){
    float a = 3.4E+38;
    printf("%f\n", a);
    a = a+a;
    printf("%f\n", a);
}