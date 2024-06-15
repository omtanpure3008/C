#include <stdio.h>

int main()
{

    // Arithmetic Operators

    /*
        1. Addition +
        2. Substraction -
        3. Multiplication *
        4. Division /
        5. Modulus %
    */

    int a = 6;
    int b = 6;

    int result;

    result = a + b;
    printf("The value of result is: %d \n", result);

    result = a - b;
    printf("The value of result is: %d \n", result);

    result = a * b;
    printf("The value of result is: %d \n", result);

    float c = a;
    float d = b;

    float Result = c / d;
    printf("The value of result is: %f \n", Result);

    result = b % a;
    printf("The value of result is: %d \n", result);

    printf("****************************************\n");


    // Comparison operator conditional operator relational operator

    /*
        1. less than <
        2. greater than >
        3. less than equal to <=
        4. greater than equal to >=
        5. equal to equal to ==
    */

    printf("The condition is: %d \n", a < b);
    printf("The condition is: %d \n", a > b);
    printf("The condition is: %d \n", a <= b);
    printf("The condition is: %d \n", a >= b);
    printf("The condition is: %d \n", a == b);

    // Assignment Operator =

    int saurabh = 5;
    // 7

    // Increment Operator ++

    //post Increment
    printf("The incremental value of saurabh is: %d\n", saurabh++);

    //pre INcrement
    printf("The incremental value of saurabh is: %d\n", ++saurabh);

    // Decrement Operator --

    int rohit = 10;

    printf("The decremental value of rohit is: %d \n", rohit--); // 10
    printf("The decremental value of rohit is: %d \n", --rohit); // 8

    // Logical Operator
    /*
        1. logical and &&
        2. Logical or ||
    */

    // Short Hand Operator

    int om = 5;

    int num1 = 3;
    int num2 = 4;

    num1 *= num2;
    printf("The value of num 1 is : %d \n", num1);

    om += 1;
    printf("THe value of om is: %d \n", om);

    om += 1;
    printf("THe value of om is: %d \n", om);

    return 0;
}