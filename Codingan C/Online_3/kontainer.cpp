#include <stdio.h>
#include <math.h>
int main (){
	double n,s,a,b,c;
	double hasil=0;
	int x,y,z;
	scanf("%lf %lf %lf %lf %lf",&n,&s,&a,&b,&c);
	x=a/s;
	y=b/s;
	z=c/s;
	hasil = n/(x*y*z);
	printf("%.lf\n", ceil(hasil));

	return 0;
}

