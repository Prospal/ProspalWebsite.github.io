#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t[n];
	int index=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&t[i]);	
	}
	int q;
	int ai,bi;
	scanf("%d",&q);
	int p[q];
	int sum=0;
	for(int i=0;i<q;i++)
	{
		scanf("%d%d",&ai,&bi);
		sum=0;
		for(int i=ai;i<=bi;i++)
		{	
			sum+=t[i];
		}
		printf("Case #%d: %d\n",(i+1),sum);
	}	
	return 0;
}

