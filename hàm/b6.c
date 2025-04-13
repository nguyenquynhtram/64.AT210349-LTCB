#include <stdio.h>
#define max 50

void nhapvao(int a[],int n){
    int i;
    for(i = 0; i <= n;i++){
        scanf("%d",&a[i]);
    }
}

void inra(int a[],int n){
    int i;
    for(i = 0;i <= n;i++){
        printf("%d  ",a[i]);
    }
}

int poww(int x,int y){
    int i;
    int s = 1;
    for(i = 1;i <= y;i++){
        s *= x;
    }
    return s;
}

int tinh(int x,int n,int a[]){
    int i;
    int p = 0;
    for(i = 0;i <= n;i++){
        p += a[i]*poww(x,i);
    }
    return p;
}

int main(){
    int n,x,m;
    int a[max],b[max],c[max];
    
    printf("nhap vao n,m: ");
    scanf("%d%d",&n,&m);
    
    printf("nhap vao gia tri cua x: ");
    scanf("%d",&x);
    
    printf("nhap vao cac he so cua da thuc p: ");
    nhapvao(a,n);
    
    printf("nhap vao cac he so cua da thuc q: ");
    nhapvao(b,m);
    
    //tinh he so cua da thuc tong
    int j = 0;
    while(j <= m && j <= n){
        c[j] = a[j] + b[j];
        j++;
    }
    while(j <= n){
        c[j] = a[j];
        j++;
    }
    while (j <= m){
        c[j] = b[j];
        j++;
    }
    
    printf("\ncac he so cua da thuc p la: ");
    inra(a,n);
    printf("\ncac he so cua da thuc q la: ");
    inra(b,m);
    printf("\ncac he so cua da thuc tong t la: ");
    inra(c,j-1);
    
    printf("\ngia tri cua x la:%d",x);
    printf("\ngia tri cua 3 da thuc p , q, t lan luot la: %d,%d,%d",tinh(x,n,a),tinh(x,m,b),tinh(x,n,a)+tinh(x,m,b));
}
