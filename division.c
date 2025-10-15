#include <stdio.h>

int main() {
    int a = 125;
    int b = 60;
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d / %d = %.2f\n", a, b, a/(float)b);
    printf("%d\n", a%b);
}