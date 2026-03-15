#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("До:    a = %d, b = %d\n", a, b);

    int tmp = a;
    a = b;        
    b = tmp;     

    printf("После: a = %d, b = %d\n", a, b);
    return 0;
}