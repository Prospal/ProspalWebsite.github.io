#include <stdio.h>
int main (){
	int T,N;
	scanf("%d",&T);
	int a[T];
	for(int x=0;x<T;x++)
	{
		scanf("%d",&N);
		printf("Case #%d:\n",(x+1));
		for(int i=1;i<=N;i++){
			for(int j=N-1;j>=i;j--){
				printf(" ");
			}
			for(int k=1;k<=i;k++){
				int z=k+N;
				if(z%2!=0)
				{
					printf("#");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
