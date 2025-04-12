//tim phan tu be nhat lon nhat trong mang kem vi tri 

#include <stdio.h>

void main(){
	int a[101],i,n,min,max,r,s;
	
	printf("nhap vao so phan tu cua mang la : ");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		printf("nhap vao phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	
	max = a[0];
	r = 0;
	for(i = 0;i < n;i++){
		if (a[i]>max){
			max = a[i];
			r = i;
		}
	}
	
	min = a[0];
	s = 0;
	for(i = 0;i < n;i++){
		if (a[i]<min){
			min = a[i];
			s = i;
		}
	}
	
	printf("phan tu lon nhat trong mang la %d va o vi tri %d",max,r);
	printf("\nphan tu be nhat trong mang la %d va o vi tri %d",min,s);
}
