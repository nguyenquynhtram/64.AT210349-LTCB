#include <stdio.h>

int main()
{
    int n;
    
    printf("nhap vao so nguyen duong n: ");
    scanf("%d",&n);
    
    int a[n][n],i,j;
    int s = 1,h1 = 0,h2 = n - 1, c1 = 0,c2 = n - 1;
    
    while(h1 <= h2 && c1 <= c2){
        for(i = c1;i <= c2;i++){
            a[h1][i] = s;
            s++;
        }
        h1++;
        for(i = h1;i <= h2;i++){
            a[i][c2] = s;
            s++;
        }
        c2--;
        
        for(i = c2;i >= c1;i--){
            a[h2][i] = s;
            s++;
        }
        h2--;
        
        for(i = h2;i >= h1;i--){
            a[i][c1] = s;
            s++;
        }
        c1++;
    }
    
    printf("ma tran xoay ung voi n la: ");
    for(i = 0;i < n;i++){
        printf("\n");
        for(j = 0;j < n;j++){
            printf("%3d",a[i][j]);
        }
    }
}
