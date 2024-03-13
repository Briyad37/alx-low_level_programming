#include<stdio.h>

/**
 * main -prints sizes of variable types
 *
 * Return: 0 (Sucesss)
 */

int main(void)
{
printf("Size of char: %lu bytes(s)\n", sizeof(char));
printf("Size of int: %lu bytes(s)\n", sizeof(int));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long int: %lu byte(s)\n", sizeof(long int));
printf("Size oflong long int: %lu byte(s)\n", sizeof(long long int));
printf("size of float: %lu byte(s)\n", sizeof(float));

return (0);

}
