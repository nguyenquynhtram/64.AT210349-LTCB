#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	float hihi=a/d,hehe=b/e, hix=c/f;
	if (hihi!=hehe){
		float y=(f-d*c/a)/(e-d*b/a);
		float x=(c-b*y)/a;
		printf("x = %.2f y = %.2f", x,y);
	}else if (hihi==hehe && hihi!=hix){
		printf("phuong trinh vo nghiem");
	}else{
		printf("Phuong trinh vo so nghiem");
	}
}
