#include <stdio.h>
#include <stdlib.h>

double cube(double num); // If I dont write this line I have to cteate a cube function here otherwise there will be an error

// double cube(double num) {
//     //double result = num * num * num;
//     return /*result =*/ num * num * num;
// }

int main() {

    printf("%f\n", cube(3.0));

    return 0;
}

// double cube(double num) {
//     double result = num * num * num; *Line 25 will do the same thing*
//     return result = num * num * num;
// }

double cube(double num) {
    //double result = num * num * num;
    return /*result =*/ num * num * num; /*return function will get us out of the program,
    so after this line nothing will be executed*/
}