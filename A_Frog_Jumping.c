#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        
        long long int a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);
        if (a == b && k % 2 == 0)
        {
            printf("0\n");
            continue;
        }
        if (a == b && k % 2 != 0)
        {
        
            printf("%d\n", a);
            continue;
        }

        long long int totalJum = 0;
        for (long long int j = 1; j <= k; j++)
        {
            if (j % 2 != 0)
            {
                totalJum += a;
            }
            else if (j % 2 == 0)
            {
                totalJum -= b;
            }
        }
        printf("%lld\n", totalJum);
    }

    return 0;
}