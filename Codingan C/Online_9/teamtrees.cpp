#include <stdio.h>

int main(){
	long long int t,a,sum;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		scanf("%lld",&a);
		long long int g[a];
		sum=0;
		for(int y=0;y<a;y++){
			scanf("%lld",&g[y]);
			sum+=g[y];
		}
		
		printf("Case #%d: %lld\n",j+1,sum);
	}
	return 0;
}
