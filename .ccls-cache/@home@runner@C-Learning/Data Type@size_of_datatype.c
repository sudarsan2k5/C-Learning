#include "stdio.h"

int main()
{
    char a;
    int b;
    short int c;
    long int d;
    long long int e;
    float f;
    double g;
    long double h;

    printf("char size: %d\n", sizeof(a));
    printf("int size: %d\n", sizeof(b));
    printf("short int size: %d\n", sizeof(c));
    printf("long int size: %d\n", sizeof(d));
    printf("long long int size: %d\n", sizeof(e));
    printf("float size: %d\n", sizeof(f));
    printf("double size: %d\n", sizeof(g));
    printf("long double size: %d\n", sizeof(h));
}