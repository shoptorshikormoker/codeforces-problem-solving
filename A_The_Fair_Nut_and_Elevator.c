#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, minCost = -1;
    scanf("%d", &n);
    int people[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &people[i]);
    }
    for (int x = 1; x <= n; x++) // current position for elevator//
    {
        int totalUnit = 0;
        for (int i = 1; i <= n; i++) // each floar
        {
            totalUnit += (abs(x - i) + abs(i - 1) + abs(x - 1)) * 2 * people[i - 1];
            
        }
        if (minCost == -1 || totalUnit < minCost)
        {
            minCost = totalUnit;
        }
    }
    printf("%d\n", minCost);

    return 0;
}