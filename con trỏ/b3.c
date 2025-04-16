#include <stdio.h>

int main(){
	int a[50],i,n;
	int *pa;
	pa = a;
	
	printf("nhap vao so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	//nhap gia tri mang
	for(i = 0;i < n;i++){
		printf("nhap vao phan tu a[%d]: ",i);
		scanf("%d",pa + i);
	}
	
	int max = *pa;
	for(i = 0;i < n;i++){
		if(*(pa+i) > max){
			max = *(pa+i);
		}
	}
	
	int min = *pa;
	for(i = 0;i < n;i++){
		if(*(pa+i) < min){
			min = *(pa+i);
		}
	}
	
	printf("gia tri lon nhat cua mang la: %d",max);
	printf("\ngia tri nho nhat cua mang la: %d",min);
}
	
	
	
	
