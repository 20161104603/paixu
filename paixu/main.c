#include<stdio.h>
int main()
{
    int n[11],i,j,t,k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++){
            if(n[j]>n[j+1])
            {
            t=n[j];
            n[j]=n[j+1];
            n[j+1]=t;
        }
        }
    }
    for(k=0;k<10;k++) printf("%d ",n[k]);
    printf("\n");
    return 0;
}
