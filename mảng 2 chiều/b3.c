#include <stdio.h>

void main(){
    int i,j,m,n,p,t;
    int a[20][20],b[20][20],c[20][20];

    printf("nhap vao n,m,p: ");
    scanf("%d%d%d",&n,&m,&p);
    
    //nhap vao phan tu ma tran a
    for(i = 0 ;i < n;i++){
        for(j = 0;j < m;j++){
            printf("nhap vao phan tu a[%d][%d]: ",i + 1,j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    
    //nhap vao phan tu ma tran b 
    for(i = 0 ;i < m;i++){
        for(j = 0;j < p;j++){
            printf("nhap vao phan tu b[%d][%d]: ",i + 1,j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    
    int s;
    //tinh tich 2 ma tran
    for(i = 0 ;i < n;i++){
        for(j = 0;j < p;j++){
            s = 0;
            for(t = 0;t < m;t++){
                s+=a[i][t]*b[t][j];
                c[i][j]= s;
            }
        }
    }
    
    //in ra ma tran a
    printf("\nma tran a: ");
    for(i = 0 ;i < n;i++){
        printf("\n");
        for(j = 0;j < m;j++){
            printf("%3d",a[i][j]);
        }
    }
    
    //in ra ma tran b
    printf("\nma tran b : ");
    for(i = 0 ;i < m;i++){
        printf("\n");
        for(j = 0;j < p;j++){
            printf("%3d",b[i][j]);
        }
    }

    //in ra ma tran tich
    printf("\nTich 2 ma tran a va b la: ");
    for(i = 0 ;i < n;i++){
        printf("\n");
        for(j = 0;j < p;j++){
            printf("%3d",c[i][j]);
        }
    }
}
