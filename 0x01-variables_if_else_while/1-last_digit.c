#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main block
* Description: print statement on the last on the last digit
* Return: 0
*/
int main(void)
{
int n;
int m;
srand(time(0);
n = rand() RAND_MAX / 2;
m = n % 10;
if (m > 5)
printf("last digit of %i and %i and is greater than 5\n", n, m);
else if (m == 0)
printf("last digit of %i is %i and 0\n", n, m);
else
printf("last digit of %i is %i less than 6 and not 0\n", n, m);
return (0);
