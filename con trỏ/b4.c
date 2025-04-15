#include <stdio.h>
int in(int a[], int n){
	for (int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
void xep(int a[], int n){
	for (int i=0; i<n; i++ ){
		for (int j=i; j<n; j++){
			if (a[i]>a[j]){
				int p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}
	}
}
int main (){
	int n;
	printf("nhap so phan tu cua mang\n");
	scanf("%d",&n);
	int a[n];
	printf("nhap mang gom %d phan tu\n",n);
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	xep(a,n);
	printf ("mang da xep nhap la\n");
	in(a,n);
}
