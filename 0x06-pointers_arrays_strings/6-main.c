#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char str[] = "Expectthebest.Preparefortheworst.Capitalizeon whatcomes.\n helloworld!hello-world 0123456helloworld\thelloworld.helloworld\n";
char *ptr;

ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
