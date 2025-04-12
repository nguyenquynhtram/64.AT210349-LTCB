#include <stdio.h>

void main(){
	int a[10],i;
	
	for(i = 0;i < 10;i++){
		printf("nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("cac phan tu cua mang theo chieu dao nguoc la: ");
	for(i = 9;i >= 0;i--){
		printf("%d  ",a[i]);
	}
}
