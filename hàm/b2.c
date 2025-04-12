#include <stdio.h>

int giaithua(int n){
	if (n == 0){
		return 1;
	}
	return n*giaithua(n-1);
}

int main(){
	int n;
	
	printf("nhap vao n: ");
	scanf("%d",&n);
	
	printf("gia tri cua %d! la: %d",n,giaithua(n));
}	
