#include<stdio.h>
long long int fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    long long int count = fac(n-1);
    count = count * n;
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int result = fac(n);
    printf("%lld",result);
    return 0;
}