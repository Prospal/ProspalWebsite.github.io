#include <stdio.h>
int main (){
	int i,t;
	long long x,y;
	long long int hasil1=0,hasil2=0;
	scanf("%d %lld %lld",&t,&x,&y);
	long long n[t];
	for(i=0;i<t;i++){	
		scanf("%lld",&n[i]);	
		if(n[i]%2==0){
			hasil1 += n[i]*y;
		}else{
			hasil2 += n[i]*x;
		}	
	}
	printf("%lld\n",hasil1+hasil2);
	return 0;
}

