#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float r,hasil;
	float phi=3.14159265359;
	scanf("%d %d %d",&a,&b,&c);
	r=(sqrt(a*a+b*b+c*c))/2;
	hasil=4*phi*r*r;
	printf("%.2f\n",hasil);
	
	return 0;
}
