#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("Enter you age : ");
    scanf("%d", &age); //& this is a pointer
    printf("The age of the user is : %d\n", age);
    printf("\n");

    double sgpa;
    printf("Enter you sgpa : ");
    scanf("%lf", &sgpa); //& this is a pointer
    printf("The sgpa of the user is : %f\n", sgpa);
    printf("\n");

    char grade;
    printf("Enter you grade : ");
    scanf("%s", &grade); //& this is a pointer
    printf("The grade of the user is : %c\n", grade);
    printf("\n");

    char name[20];
    printf("Enter you full name : ");
    scanf("%s", name); //in this case we dont need &
    printf("The name of the user is : %s\n", name);
    printf("\n");

    char fullname[20];
    printf("Enter you full name again : ");
    fgets(fullname, 20, stdin); //in this case we dont need &
    printf("The full name of the user is : %s\n", fullname);
    printf("\n");

    return 0;
}