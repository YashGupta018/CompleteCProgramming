#include <stdio.h>
#include <stdlib.h>
void hello();

int main() {

    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    hello(name, age);

    return 0;
}
void hello(char name[], int age) {

    for(int i = 0; i <= 10; i++) {
        printf("Hi %s and your age is %d\n", name, age);
    }

}