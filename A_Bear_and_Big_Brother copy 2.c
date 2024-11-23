#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int years = 0;
    // for (int i = a; i <= b*2; i = i * 3)
    // {
    //     years++;
    // }
    while (1)
    {
        if (a<=b)
            years++;
        else       
            break;
        a = a*3;
        b = b*2;
        
        
    }
    

    printf("%d\n", years);
    return 0;
}
