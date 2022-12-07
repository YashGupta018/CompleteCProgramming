#include <stdio.h>
#include <stdlib.h>

int main() {

    int luckyNumbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("%d\n", luckyNumbers[2]);

    int userInput[10];
    
    for(int i = 0; i <= 10; i++){
        printf("Enter a number : ");
        scanf("%d", &userInput[i]);
        printf("The number entered was : %d\n", userInput[i]);
    }
    printf("I just printed 11 number you entered\n");

    return 0;
} 