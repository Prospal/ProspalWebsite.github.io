#include <stdio.h>
int main (){
	long long n;
	double x,y,diskon;
	double hasil,harga,pajak;
	scanf("%lld %lf %lf",&n,&x,&y);
	diskon = 100-x;
	harga = (n*diskon)/100;
	pajak = (y*harga)/100;
	hasil = harga+pajak;
	printf("%.2lf\n",hasil);
	
	return 0;
}
