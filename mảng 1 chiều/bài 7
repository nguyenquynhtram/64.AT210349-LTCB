#include <stdio.h>

int main()
{
    int a[101],i,n,s,j;
    
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    
    for(i = 0;i < n;i++){
        printf("nhap vao phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    
    for(j = n;j >= 0;j--){
        for(i = 0;i < n - 1;i++){
            if (a[i] > a[i+1]){
                s = a[i];
                a[i] = a[i +1];
                a[i+1]=s;
            }
        }
    }
    
    for(i = 0;i < n;i++){
        printf("%d  ",a[i]);
    }
}
