#include <stdio.h>
int prime(int x);
int main (){
	int i,j,t,a;
	scanf("%d",&t);
	for(a=0;a<t;a++){
		int tes;
		scanf("%d",&tes);
		int n=2;
		printf("Case #%d:\n",a+1);
		for(i=1;i<=tes;i++){	
			for(j=1;j<=i;j++){
				while(!prime(n)){
					n++;
				}
				printf("%d",n%10);
				n++;	
			}
			printf("\n");
		}
	}
	
	return 0;
}
int prime(int n){
	int flag=1;
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	if(flag) return 1;
	return 0;
}

