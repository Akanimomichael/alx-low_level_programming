#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
* main - this prints random password keys which must sum 2772
* Return: (0) success when executed
*/
int main(void)
{
char pick;
char combinations[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i, rand_num, sum = 2772;
srand(time(NULL));
for (i = 0; sum > 200; i++)
{
rand_num = rand() % (sizeof(combinations) - 1);
pick = combinations[rand_num];
putchar(pick);
sum = sum - pick;
}
if (sum > 122)
{
putchar(sum / 2);
putchar((sum / 2) + (sum % 2));
}
else
putchar(sum);
return (0);
}
