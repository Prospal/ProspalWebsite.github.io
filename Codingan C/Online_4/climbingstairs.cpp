#include <stdio.h>
int main (){
	
	int i,t;
	scanf("%d",&t);
	int n[t];
	for(i=0;i<t;i++){	
		scanf("%d",&n[i]);
		if(n[i]<=n[i-1]){
			printf("%d ",n[i-1]);
		}
	}
	printf("%d\n",n[t-1]);
	return 0;
}

