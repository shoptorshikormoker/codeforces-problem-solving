#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>=10 || a+c>=10 || b+c>=10){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}