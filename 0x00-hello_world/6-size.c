#include <stdio.h>

/**
 * main - to print the size of various types on the computer
 *
 * Return: 0 when successful
 */

int main(void)
{
      printf("Size of a char: %lu byte(s)", sizeof(char));
      printf("Size of an int: %lu byte(s)", sizeof(int));
      printf("Size of a long int: %lu byte(s)", sizeof(long int));
      printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
      printf("Size of a float: %lu byte(s)", sizeof(float));
      return (0);
}
