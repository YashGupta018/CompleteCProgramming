#include <stdio.h>
#include <stdlib.h>

//Hard Coded

/*int max (int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    }
    else {
        result = num2;
    }
    return result;
}

int main () {
    printf ("%d", max (4, 10));
    return 0;
}*/

//User Input

int max(int num1, int num2, int num3) {
    if(num1 > num2) {
        if(num1 > num3) {
            printf("Num1 is bigger than num2 and num3\n");
        }
        if(num1 < num3) {
            printf("Num3 is bigger than num2 and num1\n");
        }
    }
    else if (num2 > num3) {
        printf("Num2 is bigger than num3 and num1\n");
    }
    else if (num3 > num1) {
        printf("Num3 is bigger than num1 and num2\n");
    }
    return 0;
}

int main() {
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("%d", max(num1, num2, num3));
    return 0;
}
