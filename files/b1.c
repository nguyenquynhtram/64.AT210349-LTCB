#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sinhMaTranVaoFile(int dong,int cot,char*filePath)
{
    int a[100],b[100],c[100];
    FILE* f=fopen("CONG_MT.C","r");
    fprintf(f,"MA TRAN A\n");
    for(int i=0; i<dong*cot; i++)
    {
        scanf("%d",&a[i]);
        fprintf(f,"%4d",a[i]);
        if((i+1)%cot==0)
            fprintf(f,"\n");
    }
    fprintf(f,"MA TRAN B\n");
    for(int i=0; i<dong*cot; i++)
    {
        scanf("%d",&b[i]);
        c[i]=a[i]+b[i];
        fprintf(f,"%4d",b[i]);
        if((i+1)%cot==0)
            fprintf(f,"\n");
    }
    fprintf(f,"MA TRAN C\n");
    for(int i=0; i<dong*cot; i++)
    {
        fprintf(f,"%4d",c[i]);
        if((i+1)%cot==0)
            fprintf(f,"\n");

    }
    fclose(f);
}
int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    sinhMaTranVaoFile(m,n,"CONG_MT.C");
    return 0;
}
