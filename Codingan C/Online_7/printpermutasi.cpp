#include <stdio.h>
#include <stdbool.h>
int N,catat[100];
bool pernah[100];

void print(int deep){
	if (deep >= N) {
		for (int i = 0; i < N; i++) {
			printf("%d", catat[i]);
		}
		printf("\n");
	}else {
		for (int i = 1; i <= N; i++) {
			if (!pernah[i]) {
			pernah[i] = true; 
			catat[deep] = i;
			print(deep + 1);
			pernah[i] = false;
			}
		}
	}
}
int main (){
	int x;
	scanf("%d",&x);
	for(int z=1;z<=x;z++){
		scanf("%d",&N);
		printf("Case #%d:\n",z);
		print(0);
	}
	return 0;
}
