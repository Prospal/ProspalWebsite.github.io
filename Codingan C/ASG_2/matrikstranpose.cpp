#include <stdio.h>
int main (){	
	int t[3][3];
	int i,j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%i", &t[i][j]);
			getchar();
		}
	}
	printf("%i %i\n",t[0][0],t[1][0]);
	printf("%i %i\n",t[0][1],t[1][1]);
	return 0;
}
