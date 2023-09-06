#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 *
 * Description: The 'write' function
 * is included in the <unistd.h> header.
 * It is used to write data to a file descriptor.
 * It accepts 3 args namely: the file descriptor,
 * the pointer to data you want to write and
 * the byte count.
 * Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
