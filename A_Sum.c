#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a, b, c;
    
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if ((a + b) == c || (a + c) == b || (b + c) == a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}