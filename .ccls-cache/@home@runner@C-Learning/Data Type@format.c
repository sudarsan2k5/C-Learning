#include <stdio.h>

int main(){
    char gender = 'M';
    short int age = 17;
    int books_read = 500;
    long int income = 20000;
    long long int ipad_price = 40000;
    float mark = 72.57;
    double percentile = 83.645236;
    long double mobile = 7205281825;

    printf("Gender: %c\n", gender);
    printf("Age: %hd\n", age);
    printf("Books read: %d\n", books_read);
    printf("Income: %ld\n", income);
    printf("Ipad price: %lld\n", ipad_price);
    printf("Mark: %f\n", mark);
    printf("Percentile: %lf\n", percentile);
    printf("Mobile: %Lf\n", mobile);
    
}