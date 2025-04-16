#include<stdio.h>
#include<math.h>
int main (){
	long long n,i=0,j=1,s=0;
	scanf("%ld",&n);
	long long a=n, b=n;
	while (n>0){
		i=n%2;
		n=n/2;
		s+=i*j;
		j*=10;
	}
	printf("%ld\n",s);
	long long u=0,y=1,m=0;
	while (a>0){
		u=a%8;
		a=a/8;
		m+=u*y;
		y*=10;
	}
	printf("%ld\n",m);
	printf("%X",b);
}
