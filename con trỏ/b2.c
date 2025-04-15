#include <stdio.h>
int in(int a[]){
	for (int i=0; i<10; i++){
		printf("%d ",a[i]);
	}
}
int main (){
	int a[10];
	printf("nhap mang gom 10 phan tu\n");
	for (int i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	printf ("mang da nhap la\n");
	in(a);
}
