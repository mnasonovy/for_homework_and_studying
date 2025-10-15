#include <stdio.h>   // подключаем заголовочный файл для ввода-вывода

int main(void) {
    printf("sizeof(char) = %zu Bytes\n", sizeof(char));
    printf("sizeof(int) = %zu Bytes\n", sizeof(int));
    printf("sizeof(float) = %zu Bytes\n", sizeof(float));
    printf("sizeof(double) = %zu Bytes\n", sizeof(double));

    return 0;
}
