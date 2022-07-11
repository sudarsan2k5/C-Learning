#include <stdio.h>
#include <unistd.h>

int main(){
    signed char a = 0;
    printf("%d\n", a);
    int x = 0;
    while(x < 500){
        printf("%d\n", a);
        a = a+1;
        x++;
        usleep(30000);
    }
}