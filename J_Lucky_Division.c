#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int temp1 = n;
    int digLen = 0;
    for (int i = 0; i < 5; i++)
    {
        if (temp == 0)
        {
            break;
        }
        temp = temp / 10;
        digLen++;
    }

    int digits[digLen];

    for (int i = digLen - 1; i >= 0; i--)
    {
        digits[i] = n % 10;
        n = n / 10;
    }

    int count = 0;
    for (int i = 0; i < digLen; i++)
    {
        if (digits[i] == 4 || digits[i] == 7)
        {
            count++;
        }
    }
    if (digLen == count && temp1 != 0)
    {
        printf("YES");
    }
    else if (temp1 == 0)
    {
        printf("NO");
    }
    else
    {
        if (temp1 % 4 == 0 || temp1 % 7 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}