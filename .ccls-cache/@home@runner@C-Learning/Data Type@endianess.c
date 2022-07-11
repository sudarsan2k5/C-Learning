#include "stdio.h"

int main(){
    short int a = 300;
    unsigned char *p = &a;

    printf("%d %d\n", *(p+0), *(p+1));
}