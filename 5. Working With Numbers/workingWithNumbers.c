#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    printf("%f \n", 5.0 / 3.8);
    printf("%f \n", 5.0 * 3.8);
    printf("%f \n", 5.0 + 3.8);
    printf("%f \n", 5.0 - 3.8);

    printf("\n");

    printf("%d \n", 5 / 4);
    printf("%f \n", 5 / 3.0);
    printf("%f \n", 5.0 / 4);
    printf("%f \n", 5.0 - 3.8);

    printf("\n");

    int num = 10;
    printf("%d\n", num);

    printf("%f\n", pow(2, 2));
    printf("%f\n", sqrt(36));

    printf("\n");

    printf("%f\n", ceil(36.12)); //round off to the highest
    printf("%f\n", ceil(36.82)); //round off to the highest
    printf("%f\n", floor(36.12)); //round off to the lowest
    printf("%f\n", floor(36.82)); //round off to the lowest

    return 0;
}