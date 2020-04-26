#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
       n= get_int("Enter an int between 1-8: ");

    }
    while (n < 1 || n > 8);
    for (int i = 1; i <= n;i++)
    {
        for (int k = 0;k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
