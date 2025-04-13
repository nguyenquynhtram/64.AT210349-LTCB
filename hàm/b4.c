#include <stdio.h>
#define max 50

void inmatran(int a[][max],int m,int n){
	int i,j;
	for(i = 0;i < m;i++){
	    printf("\n");
		for(j = 0;j < n;j++){
			printf("%3d",a[i][j]);
		}
	}
}	
	
void nhapmatran(int a[][max],int m,int n){
	int i,j;
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

void tong(int a[][max],int b[][max],int tog[][max],int m,int n,int p,int q){
	if(m != p && n != q){
	    printf("\nkhong cong duoc 2 ma tran");
	}
	else{
	    int i,j;
	    for(i = 0;i < m;i++){
		    for(j = 0;j < n;j++){
			    tog[i][j] = a[i][j] + b[i][j];
		    }
	    }
	    printf("\ntong hai ma tran la: ");
	    inmatran(tog,m,n);
	}
}
	
void tich(int a[max][max], int b[max][max],int tichh[max][max],int m,int n,int p,int q){
	if(n != p){
	    printf("\nkhong nhan duoc hai ma tran");
	}
	else{
	    int i,j,k;
	    for(i = 0;i < m;i++){
	        for(j = 0;j < q;j++){
	            tichh[i][j] = 0;
			    for(k = 0;k < p;k++){
			        tichh[i][j] += a[i][k]*b[k][j];
			     }
		    }
	    }
	    printf("\ntich hai ma tran la: ");
	    inmatran(tichh,m,q);
	}
}
			
int main(){
	int m,n,p,q;
	int a[max][max],b[max][max],tog[max][max],tichh[max][max];
	
	printf("nhap vao so hang va so cot cua ma tran a: ");
	scanf("%d%d",&m,&n);
	printf("nhap vao so hang va so cot cua ma tran b: ");
	scanf("%d%d",&p,&q);
	
	printf("nhap vao ma tran a: \n ");
	nhapmatran(a,m,n);
	printf("nhap vao ma tran b: \n ");
	nhapmatran(b,p,q);
	
	tong(a,b,tog,m,n,p,q);
	tich(a,b,tichh,m,n,p,q);
}
