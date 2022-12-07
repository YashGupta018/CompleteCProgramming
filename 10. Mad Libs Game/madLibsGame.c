#include <stdio.h>
#include <stdlib.h>

int main() {

    char color[20], pluralNoun[20], celebrity[20];

    printf("Enter a colour : ");
    scanf("%s", color);

    printf("Enter a plural noun : ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity : ");
    scanf("%s", celebrity);


    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNoun);
    printf("I Love %s \n", celebrity);

    return 0;
}