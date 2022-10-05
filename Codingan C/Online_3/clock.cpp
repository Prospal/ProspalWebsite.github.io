#include <stdio.h>
int main(){
	int a,b,c;
	double k,l,m;
	double hasil1,hasil2,hasil3;
	int var;
	scanf("%d\n",&var);
	scanf("%d %lf\n",&a,&k);
	scanf("%d %lf\n",&b,&l);
	scanf("%d %lf",&c,&m);
	hasil1=(a*k)/360;
	hasil2=(b*l)/360;
	hasil3=(c*m)/360;
	printf("%.2lf\n",hasil1);
	printf("%.2lf\n",hasil2);
	printf("%.2lf\n",hasil3);
	
	return 0;
}
