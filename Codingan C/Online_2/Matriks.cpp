#include <stdio.h>
int main (){
	char tes[4][4];
	int i,j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%c", &tes[i][j]);
			getchar();
		}
	}
	printf("  %c\n",tes[0][0]);
	printf(" %c %c\n",tes[1][0],tes[0][1]);
	printf("%c %c %c\n",tes[2][0],tes[1][1],tes[0][2]);
	printf(" %c %c\n",tes[2][1],tes[1][2]);
	printf("  %c\n",tes[2][2]);
	
	return 0;
}
   

