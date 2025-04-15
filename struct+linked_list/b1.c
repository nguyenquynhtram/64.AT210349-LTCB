#include <stdio.h>
#include <string.h>
struct ban{
	char ten[100];
	long long gia,sl,t;
};
typedef ban ban;
void xep(ban *a, int n){
	for (int i=0; i<n; i++){
		for (int j=i; j<n; j++){
			if (strcmp(a[i].ten,a[j].ten)>0){
				ban temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
} 
int main (){
	int n;
	printf("nhap so luong mat hang:\n");
	scanf("%d",&n);
	ban a[n];
	for (int i=0; i<n; i++){
		getchar();
		printf("mat hang thu %d:\n",i+1);
		printf("ten hang: \n"); gets(a[i].ten);
		printf("gia: \n"); scanf("%lld",&a[i].gia);
		printf("so luong: \n"); scanf("%lld",&a[i].sl);
		a[i].t=a[i].gia*a[i].sl;
	}
	xep(a,n); 
	printf("\t\tSO LIEU BAN HANG\n");
	printf("STT     Ten Hang     Don gia     So luong     Thanh tien\n");
	for (int i=0; i<n; i++){
		printf("%-3d     %-8s     %-7lld     %-8lld     %lld\n", i+1, a[i].ten, a[i].gia, a[i].sl, a[i].t);
	}
} 
