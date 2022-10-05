#include <stdio.h>
int main (){
	int i,x,t,n,j;
	int tes[t][t];
	int sum[100];
	scanf("%d",&n);
	int a[n];
	for(x=0;x<n;x++)
	{
		scanf("%d",&t);
		for(i = 0; i < t; i++){
			for(j = 0; j < t; j++){
				scanf("%d", &tes[i][j]);
			}
		}
		for(i = 0; i < t; i++){
			for(j = 0; j < t; j++){
				j=0;
				sum[j]+=tes[j][i];		
			}
		}
	}
	for(x=0;x<n;x++){
		printf("Case #%d: %d %d %d\n",(x+1),sum[j],sum[j],sum[j]);
	}
	return 0;
}

