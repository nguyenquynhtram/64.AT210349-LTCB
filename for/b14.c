#include<stdio.h>
#include<math.h>
int main (){
	int i=0;
	double a,b;
	scanf ("%lf%lf",&a,&b);
	double n= a*pow(1+b/100,i), s=n;
	printf ("Nam  GDP\n");
	while (n<=s*2){
		n= a*pow(1+b/100,i);
		printf("%d  %lf\n",2014+i,n);
		i++;
	}
}
