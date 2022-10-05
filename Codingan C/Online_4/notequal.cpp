#include <stdio.h>
int main (){
	long long a,b,c,d;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	if((a*b)>(c+d)){
		printf("True\n");
	}else if((a*b)<(c+d)){
		printf("False\n");
	}else {
	}
	return 0;
}
