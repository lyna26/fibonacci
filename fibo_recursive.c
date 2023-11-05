#include <stdio.h>

unsigned long fibonacci(unsigned long n)
{
    if (n == 1)
    {
        return 1;
    }

    else if (n == 0)
    {
        return 0;
    }

    return fibonacci(n - 1) + fibonacci(n);
}
