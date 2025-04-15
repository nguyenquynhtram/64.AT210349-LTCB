#include <stdio.h>

void hoanvi(int *a,int *b){
	int tg;
	tg = *a;
	*a = *b;
	*b = tg;
}

int main(){
	int a = 10,b = 5;
	
	hoanvi(&a,&b);
	printf("a = %d",a);
	printf("\nb = %d",b);
}
