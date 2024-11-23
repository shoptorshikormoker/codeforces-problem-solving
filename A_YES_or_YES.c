#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[4];
        scanf("%s", &s);
        for (int j = 0; j < 3; j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = s[j] - 32;  
            }
        }
        
        if (s[0] == 'Y' && s[1] == 'E' && s[2]=='S')
        {
            printf("YES\n");
        }
        else
            printf("NO\n"); 
    }

    return 0;
}