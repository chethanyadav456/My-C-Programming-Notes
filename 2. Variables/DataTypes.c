/*
    In C you you have data type variables

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    float - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    long - stores integers (whole numbers), without decimals, such as 123 or -123
    short - stores integers (whole numbers), without decimals, such as 123 or -123

    Syntax
    datatype variableName = value;
*/

// Example Program

#include <stdio.h>

/**
 * A C program that demonstrates the usage of different data types in C.
 *
 * @return void
 * @author Chethan Yadav @chethanyadav456 2024
 *
 * @throws None
 */
void main(void)
{
    int x = 5;
    float y = 10.5;
    char z = 'A';
    double w = 20.5455544333;
    long int l = 10;
    long double ld = 20.5455544333;
    short int s = 10;

    printf("%d\n", x);
    printf("%f\n", y);
    printf("%c\n", z);
    printf("%lf\n", w);
    printf("%ld\n", l);
    printf("%Lf\n", ld);
    printf("%d\n", s);
}