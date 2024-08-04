/*
    Format Specifiers in C

    Format Specifiers are used to format the output of a string.

    C has many format specifiers that can be used to format the output of a string.

    %c - For character type.
    %d - For signed integer type.
    %e or %E - For scientific notation of floats.
    %f - For float type.
    %g or %G - For float type with the current precision.
    %i - For signed integer type.
    %ld or %li - For long integer type.
    %lf - For double type.
    %Lf - For long double type.
    %lu - For unsigned int or unsigned long type.
    %lli or %lld - For long long type.
    %llu - For unsigned long long type.
    %o - For octal representation.
    %p - For pointer type.
    %s - For string type.
    %u - For unsigned int type.
    %x or %X - For hexadecimal representation.
    %n - Prints nothing.
    %% - Prints the % character.

    @author Chethan Yadav @chethanyadav456 2024
    
*/

// Example Program

#include <stdio.h>

int main(void)
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

    return 0;
}