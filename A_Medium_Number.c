#include <stdio.h>

int main()
{
    int t,medium=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if ((a > b && a < c) || (a < b && a > c)) {
            medium = a;
        } else if ((b > a && b < c) || (b < a && b > c)) {
            medium = b;
        } else {
            medium = c;
        }
        printf("%d\n",medium);
    }
    return 0;
}