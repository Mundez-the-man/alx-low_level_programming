#include "main.h"

void print_triangle(int size)
{
    int i, j;
    /* if size is greater than 0 print triangle */
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            for (j = 1; j <= size - i; j++)
            {
                _putchar(' ');
            }
            for (j = 1; j <= size - i; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

