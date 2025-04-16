#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if( a<b+c && b<a+c && c<a+b ){
		int i=0,u=0;
		if (a*a+b*b==c*c ||a*a+c*c==b*b ||b*b+c*c==a*a){
			i++;
			u++;
		}
		if (a==c &&a==b &&b==c){
			u++;
			printf("Tam giac deu");
		}else if(a==c ||a==b ||c==b){
			if (i==1){
				printf("Tam giac vuong can");
				i++;
			}else{
				u++;
				printf("Tam giac can");
			}
		}
		if (i==1){
			u++;
			printf("Tam giac vuong");
		}
		if (u==0){
			printf("Tam giac thuong");
		}
		float p=(a+b+c)/2, s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nchuvi = %f",p*2);
		printf("\ndientich = %f",s);
	}else{
		printf("Khong phai ba canh 1 tam giac");
	}
}
