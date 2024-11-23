#include <stdio.h>

int main()
{
    int count = 1, i = 0;
    char s[101];
    scanf("%s", s);
    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            count++;
            if (count >= 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
        {
            count = 1;
        }
        i++;
    }
    if (count == 1)
    {
        printf("NO\n");
    }
    return 0;
}