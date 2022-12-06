#include <stdio.h>
#include <stdlib.h>

int main() {

    char name1[] = "John";
    int age1 = 35;

    printf("There once was a man named %s \n", name1);
    printf("he was %d years old.\n", age1);
    printf("He really liked the name %s \n", name1);
    printf("but did not like being %d.\n", age1);

    printf("\n");

    char name2[] = "Tom";
    int age2 = 55;

    printf("There once was a man named %s \n", name2);
    printf("he was %d years old.\n", age2);
    printf("He really liked the name %s \n", name2);
    printf("but did not like being %d.\n", age2);

    return 0;
}