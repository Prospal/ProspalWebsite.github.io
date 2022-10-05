#include <stdio.h>
int main(){
	int a,b,c,d;
	double e,f,g,h,w,x,y,z;
	long long k,l,m,n;
	double hasil1,hasil2,hasil3,hasil4;
	scanf("%d %lld\n",&a,&k);
	scanf("%d %lld\n",&b,&l);
	scanf("%d %lld\n",&c,&m);
	scanf("%d %lld",&d,&n);
	e=100-a;
	f=100-b;
	g=100-c;
	h=100-d;
	w=100/e;
	x=100/f;
	y=100/g;
	z=100/h;
	hasil1=k*w;
	hasil2=l*x;
	hasil3=m*y;
	hasil4=n*z;
	printf("$%.2lf\n",hasil1);
	printf("$%.2lf\n",hasil2);
	printf("$%.2lf\n",hasil3);
	printf("$%.2lf\n",hasil4);
	
	return 0;
}

