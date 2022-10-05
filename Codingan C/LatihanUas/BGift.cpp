#include <stdio.h>

int main (){
	
	int tes;
	scanf("%d",&tes);
	int a[1005];
	char ab[1005][1005];
	for(int i=1;i<=tes;i++){
		scanf("%s %d",ab[i],&a[i]);
	}
	for(int i=1;i<=tes;i++){
		printf("Lecturer #%d: ",i);
		for(int j=1;j<=tes;j++){
			if(a[j]==i){
				printf("%s\n",ab[j]);
			}
		}
	}
	
	return 0;
}
