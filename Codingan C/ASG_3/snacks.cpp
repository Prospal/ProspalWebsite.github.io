#include <stdio.h>
int main(){
	long long n,k;
	scanf("%lld %lld",&n,&k);
	if(n>k){
		printf("%lld\n",n-k);
	}else if(n<k){
		printf("%lld\n",n-(k%n));
	}else {
	}
	return 0;
}

