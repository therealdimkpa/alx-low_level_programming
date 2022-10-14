#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(1, 0, 1);
    printf("%d\n", sum);
    sum = sum_them_all(4,10,100,1000,10000);
    printf("%d\n", sum);    
    return (0);
}
