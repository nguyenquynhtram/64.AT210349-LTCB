#include<stdio.h>
#include<math.h>
int main (){
	long long j=1,i=0;
	long long giaithua=1;
	double tong=0;
	double e, x;
	printf("nhap vao so x ");
	scanf("%lf",&x);
	printf("nhap vao so eps ");
	scanf("%lf", &e);
	x=x*3.14/180; 
	double o=x;
	while (fabs(o)>e){
		o=(pow(x,j)/giaithua)*pow(-1,i);
		tong+=o;
		giaithua=giaithua*(j+2)*(j+1);
		j+=2;
		i+=1;
	}
	printf("%lf",tong);
}
