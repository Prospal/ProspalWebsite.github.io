#include <stdio.h>
int main(){
	double a,b;
	double c;
	double hasil;
	double segitiga,persegi;
	scanf("%lf %lf %lf",&a,&b,&c);
	segitiga=((b*c)/2)*2;
	persegi=(a*b)*3;
	hasil=segitiga+persegi;
	printf("%.3lf\n",hasil);
	
	return 0;
}

