#include <stdio.h>
#include <math.h>
int main(){
	double a[15];
	double sum;
	double pt,bk,b;
	for(int i=0;i<12;i++){
		scanf("%lf,",&a[i]);
	sum += a[i];
	}
	pt = floor(0.07*sum);
	bk = floor(0.05*sum);
	b = sum - pt - bk;
	
	printf("%.2lf, %.2lf, %.2lf\n",pt,bk,b);

	return 0;
}
