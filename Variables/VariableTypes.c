#include <stdio.h>

/*
There are 3 types of variables in C:

1. Local variables
2. Global variables
3. Static variables

Local variables are declared inside a function and can only be accessed within that function.

Global variables are declared outside a function and can be accessed from anywhere in the program.

Static variables are declared outside a function and can be accessed from anywhere in the program.
*/
// Example:

int x = 5;

int main(void)
{
    int x = 10;

    printf("%d\n", x);

    return 0;
}

// Output: 10

// Global variables can be accessed from anywhere in the program.

// Example:

int x = 5;

int main(void)
{
    printf("%d\n", x);

    return 0;
}

// Output: 5

// Static variables can be accessed from anywhere in the program.

// Example:

int x = 5;

int main(void)
{
    printf("%d\n", x);

    return 0;
}

// Output:  5