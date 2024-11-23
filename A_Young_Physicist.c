#include<stdio.h>
int main()
{
    int n,x=0,y=0,z=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int xs,ys,zs;
        scanf("%d%d%d",&xs,&ys,&zs);
        x=x+xs;
        y=y+ys;
        z=z+zs;
    }
    if(x==0 &&y==0 && z==0){
        printf("YES");
    }
        else{
            printf("NO");
        }
    
    return 0;
}