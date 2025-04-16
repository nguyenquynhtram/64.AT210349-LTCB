#include <stdio.h>

int main(){
	int i,n, a = 1,b = 1,s = 0;
	
	printf("nhap vao n: ");
	scanf("%d",&n);
	
	if(n == 1 || n == 2){
		s = 1;
	}
	
	for(i = 3;i <= n;i++){
		s = a + b;
		a = b;
		b = s;
    }
    
    printf("f(%d) = %d",n,s);	
}
