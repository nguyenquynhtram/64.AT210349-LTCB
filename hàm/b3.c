#include <stdio.h>

int fibonacci(int n){
	if(n == 1||n==2){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	int n;
	
	printf("nhap vao n: ");
	scanf("%d",&n);
	
	printf("gia tri cua phan tu thu %d trong day fibonacci la: %d",n,fibonacci(n));
}
