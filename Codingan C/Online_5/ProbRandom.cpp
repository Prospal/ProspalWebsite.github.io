#include <stdio.h>

int main (){
	
	int z,x;
	scanf("%d", &z);
	
	for (int i = 0 ; i < z ; i++){
		scanf("%d", &x);
		int numb[x];
		for (int j = 0 ; j < x ; j++){
			scanf("%d", &numb[j]);
		}
		printf("Case #%d:", i + 1);
		for (int c = x - 2 ; c >= 0 ; c -= 2){
			printf(" %d %d", numb[c], numb[c+1]);
		}
		printf("\n");
	}
	return 0;
}
