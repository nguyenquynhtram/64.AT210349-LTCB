#include <stdio.h>

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i,*pa;
	pa = a;
	for(i = 0;i < 10;i++){
		printf("%d\t",*(pa + i));
	}
}
