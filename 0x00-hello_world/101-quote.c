#include <unistd.h>
#include <stdlib.h>
/**
 * main - This is the main function
 * Return: 1 (Success)
 */
int main(void)
{
    if (write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59) == -1)
        return 1;

    return 1;
}
