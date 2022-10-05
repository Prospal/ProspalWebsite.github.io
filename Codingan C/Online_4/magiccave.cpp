#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	long long int arr[T];
	long long int A1,b=0,c=0;
	
	for(int x=1;x<=T;x++){
		scanf("%lld",&arr[x]);
		long long int a=arr[x];
		for(int i=0;i<a;i++){
			scanf("%lld",&A1);
			b+=A1;
			if(b<c && b<=0){
				c=b;
			}
		}
		printf("Case #%d: %lld\n",x,(c*-1)+1);
		c=0;
		b=0;
	}
	return 0;
}
