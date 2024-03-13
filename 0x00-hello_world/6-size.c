#include<stdio.h>

/**
 * main -prints sizes of variable types
 *
 * Returns: 0 on  sucees, non-zero on failures
 */

int main(void)
{
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of long: %lu bytes\n", sizeof(long));
printf("Size of long int: %lu bytes\n", sizeof(long int));
printf("Size oflong long int : %lu bytes\n", sizeof(long long int));
printf("size of float : %lu bytes\n", sizeof(float));

return (0);

}
