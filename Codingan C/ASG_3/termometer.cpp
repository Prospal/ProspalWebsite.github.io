#include<stdio.h>
int main(){
	double a,b,c,var;
	double r1,r2,r3;
	double f1,f2,f3;
	double k1,k2,k3;
	scanf("%lf\n",&var);
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%lf",&c);
	r1=(4*a)/5;
	r2=(4*b)/5;
	r3=(4*c)/5;
	f1=((9*a)/5)+32;
	f2=((9*b)/5)+32;
	f3=((9*c)/5)+32;
	k1=273+a;
	k2=273+b;
	k3=273+c;
	printf("%.2f %.2f %.2f\n",r1,f1,k1);
	printf("%.2f %.2f %.2f\n",r2,f2,k2);
	printf("%.2f %.2f %.2f\n",r3,f3,k3);
	
	return 0;
}
