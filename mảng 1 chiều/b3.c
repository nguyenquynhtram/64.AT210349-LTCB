#include <stdio.h>

void main(){
	int a[101],i,n,sum = 0,sumduong = 0,sumam=0,dem=0,demduong=0,demam=0;
	
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		printf("nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i = 0;i < n;i++){
		sum += a[i];
		dem += 1;
	}
	float tbc = (float) sum/dem;
	
	for(i = 0;i < n;i++){
		if(a[i]>0){
			sumduong += a[i];
			demduong += 1;
	    }
		else if(a[i]<0){
			sumam += a[i];
			demam += 1;
		}
	}
	float tbcduong = (float) sumduong/demduong;
	float tbcam = (float) sumam/demam;
	
	printf("\ntong cua tat ca cac so trong mang la: %d",sum);
	printf("\ntong cac so nguyen duong la : %d",sumduong);
	printf("\ntong cac so nguyen am la : %d",sumam);
	printf("\ntbc cua ca mang la : %.2f",tbc);
	printf("\ntbc cua cac so nguyen duong la: %.2f ",tbcduong);
	printf("\ntbc cua cac so nguyen am la : %.2f",tbcam);
}
