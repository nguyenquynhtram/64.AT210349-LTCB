#include <stdio.h>

void main(){
    int i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    printf("mang vua nhap vao la: ");
    for(i = 0;i < 3;i++){
        printf("\n");
        for(j = 0;j < 3;j++){
            printf("%3d",a[i][j]);
        }
    }
}
