#include <stdio.h>

int main(void)
{
    int n;
    long long sum = 0;
    int i;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("%lld", sum);
    }

    return 0;
}