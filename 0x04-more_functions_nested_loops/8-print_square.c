#include "main.h"

/**
* print_square - Print square using # based on input.
* @n : The user inputu
* Return: Void.
*/
void print_square(int size)
{
int x;
int y;
  
for (y = 0; y < size; y++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
