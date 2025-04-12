#include <stdio.h>

void sxtd(int a[],int n){
    int i,j,tg;
    for(i = 0;i < n;i++){
        for(j = i;j < n;j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

void ghepmang(int a[],int n,int b[],int m){
    int i = 0,j = 0;
    int c[202];
    int cnt = 0;
    
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[cnt]=a[i];
            i++;
            cnt++;
        }
        else{
            c[cnt] = b[j];
            j++;
            cnt++;
        }
    }
    while(i < n){
        c[cnt]=a[i];
        i++;
        cnt++;
    }
    
    while(j < m){
        c[cnt] = b[j];
        j++;
        cnt++;
    }
    
    printf("\nmang sau khi ghep la: ");
    for(i = 0;i < m+n;i++){
        printf("%3d",c[i]);
    }
}

int main(){
    int i;
    int a[101],n;
    int b[101],m;
    
    printf("nhap vao so phan tu cua mang a: ");
    scanf("%d",&n);
    
    for(i = 0;i < n;i++){
        printf("nhap vao phan tu thu %d cua mang a: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("nhap vao so phan tu cua mang b: ");
    scanf("%d",&m);
    
    for(i = 0;i < m;i++){
        printf("nhap vao phan tu thu %d cua mang b: ",i+1);
        scanf("%d",&b[i]);
    }
    
    sxtd(a,n);
    for(i = 0;i < n;i++){
        printf("%3d",a[i]);
    }
    printf("\n");
    
    sxtd(b,m);
    for(i = 0;i < m;i++){
        printf("%3d",b[i]);
    }
    ghepmang(a,n,b,m);
}
