#include <stdio.h>
void printing_digit(int number)
{
    if (number == 0)
    {
        return;
    }
    int digit = number % 10;
    int new = number / 10;
    printing_digit(new);
    printf("%d ", digit);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n == 0)
        {
            printf("0");
        }
        printing_digit(n);
        printf("\n");
    }
    return 0;
}