#include <stdio.h>

int main (){
	int x;
	scanf("%d",&x);
	for(int j=0;j<x;j++){
		long long int a;
		scanf("%lld",&a);
		long long unsigned int tes,ganjil=0;
		int i;
		for (i=1;i<=a;i++){
			scanf("%llu",&tes);
			if (i%2!=0){
				ganjil+=tes;
			}
		}
		printf("Case #%d: %llu\n",j+1,ganjil);
	}
	return 0;
}

