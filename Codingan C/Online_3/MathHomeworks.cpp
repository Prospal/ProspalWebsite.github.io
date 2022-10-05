#include <stdio.h>
int main(){
	long long a,b,c,d;
	long long e,f,g,h;
	long long k,l,m,n;
	long long hasil,hasil1,hasil2;
	scanf("(%lld+%lld)x(%lld-%lld)\n",&a,&b,&c,&d);
	scanf("(%lld+%lld)x(%lld-%lld)\n",&e,&f,&g,&h);
	scanf("(%lld+%lld)x(%lld-%lld)",&k,&l,&m,&n);
	getchar();
	hasil=(a+b)*(c-d);
	hasil1=(e+f)*(g-h);
	hasil2=(k+l)*(m-n);
	printf("%lld %lld %lld\n",hasil,hasil1,hasil2);

	return 0;
}
