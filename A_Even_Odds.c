#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int oddSI=0;
    int evenSI;
    int Arr[n];
    if(n%2==0){
        evenSI=n/2;
    }
    else{
        evenSI=n/2+1;
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            Arr[evenSI++]=i;
        }
        else{
            Arr[oddSI++]=i;
        }
    }
    printf("%d\n",Arr[k-1]);
    return 0;
}