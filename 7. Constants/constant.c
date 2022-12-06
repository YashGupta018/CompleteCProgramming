#include <stdio.h>
#include <stdlib.h>

int main() {

    const int num = 5;
    printf("%d\n", num);

    // num = 8; this can not be modified as the num is a constant variable
    printf("%d\n", num);

    printf("Hello\n");
    printf("80\n");
    printf("%s\n", "hi this is also a example of constant variables");
    printf("%s %d", "hi this is also a example of constant number", 56);

    return 0;
}