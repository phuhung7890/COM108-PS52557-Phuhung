#include <stdio.h>
int main() {
    int a = 8;
    int b = 9;
    printf("Truoc Khi Hoan Vi a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("sau khi hoan vi a = %d, b = %d\n", a, b);

    return 0;

}