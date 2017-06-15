#include<stdio.h>
int main()
{
    FILE * fp1,*fp2;
    int n[11],i,j,t,k;
    fp1 = fopen( "//Users//a20161104603//Desktop//paixu//input.txt", "r");
    fp2 = fopen( "//Users//a20161104603//Desktop//paixu//output.txt", "w+");
    for(i=0;i<10;i++)
    {
        fscanf(fp1,"%d",&n[i]);
    }

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
    for(k=0;k<10;k++)
    {
        printf("%d ",n[k]);
        fprintf(fp2,"%d ",n[k]);
    }
     fprintf(fp2,"\n");
     printf("\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
