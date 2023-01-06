#include <stdio.h>
#include <stdlib.h>

//Hard Coded (for 2 numbers)

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

//Hard Coded (for 3 numbers)

/*int max (int num1, int num2, int num3) {
    int result;
    if (num1 > num2 && num1 > num3) {
        result = num1;
    }
    else if(num2 > num1 && num2 > num3) {
        result = num2;
    }
    else {
        result = num3;
    }
    return result;
}

int main () {
    printf ("%d", max (4, 10));
    return 0;
}*/

//User Input (for 2 numbers)

/*int max(int num1, int num2) {
    if(num1 > num2) {
            printf("Num1 is bigger than num2\n");
    }
    else {
        printf("Num2 is bigger than num1\n");
    }
    return 0;
}

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("%d", max(num1, num2));
    return 0;
}*/


//User Input (for 3 numbers)
// *not optimised*
/*int max(int num1, int num2, int num3) {
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
*/
//User Input (for 3 numbers)
// *optimised*
int max(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3) {
            printf("Num1 is bigger than num2 and num3\n");
        }
    else if(num2 > num1 && num2 > num3) {
        printf("Num2 is bigger than num1 and num3\n");
    }
    else {
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