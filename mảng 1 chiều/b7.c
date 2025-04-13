#include <stdio.h>

int main()
{
    int a[101],i,n,s,j;
    
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    
    printf("nhap vao cac phan tu cua mang: ");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i = 0;i < n;i++){
        for(j = i;j < n;j++){
            if (a[i] > a[j]){
                s = a[i];
                a[i] = a[j];
                a[j]=s;
            }
        }
    }
    
    printf("mang sau khi sap xep la: ");
    for(i = 0;i < n;i++){
        printf("%d  ",a[i]);
    }
}
