#include <stdio.h>
#include <stdbool.h>

int main()
{

    // primitive data types

    // Integer data types

    /*
        1. short (2bytes)
        2. int (4byte)
        3. long (8byte)
        4. long long (16bytes)
    */

    short shortint = 4;
    printf("The value of the shortint is: %d \n", shortint);

    int integerdata = 5;
    printf("The value of the integerdata is: %d \n", integerdata);

    // printf("The size of intergerdata is: %d",sizeof(integerdata));

    long longtypedata = 14;
    printf("The value of the integerdata is: %ld \n", longtypedata);

    long long longestdata = 245;
    printf("The value of the integerdata is: %lld \n", longestdata);

    /*
        FLoating point data types

        1. float (4bytes)
        2. double (8bytes)
        3. long double (16bytes)
    */

    float floatnumber = 12.12;

    printf("The floatnumber is: %f \n", floatnumber);
    printf("The floatnumber is: %g \n", floatnumber);
    printf("The floatnumber is: %e \n", floatnumber);

    double doublenumber = 19.73859;
    printf("The doublenumber is: %lf \n", doublenumber);

    long double longdoublenumber = 23.4564362;
    printf("The long double number is: %LF \n", longdoublenumber);

    /*
        Boolean Data type
        1. true 1
        2. false 0
    */

    bool booleanValue = true;
    printf("The boolean value is: %d \n", booleanValue);

    bool falsebooleanValue = false;
    printf("The boolean value is: %d \n", falsebooleanValue);

    /*
        Character data types
        char (1byte)
    */

    char a = 'c';
    printf("The value of a is: %c", a);

    char str[] = "MY name is om";

    printf("The str is: %s \n", str);

    return 0;
}