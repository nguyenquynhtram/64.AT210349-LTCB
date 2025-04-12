#include <stdio.h>

int main(){
	int n,i;
	float A;
	printf("nhap vao so tien gui va so thang rut : ");
	scanf("%f%d",&A,&n);
	
	for( i = 1; i <= n; i++){
		A += A*9/2000;
	}
	printf("so tien nhan la %.2f ",A);
}
