#include <stdio.h>

int main (){
	int z, m, totalStar = 0;
	scanf ("%d %d", &z, &m);
	getchar();
	char star[z+1][m+1];
	for (int i = 1; i <= z; i++){
		for (int j = 1; j <= m; j++){
			scanf ("%c", &star[i][j]);
		}
		getchar();
	}
	for (int l = 1; l <= z; l++){
		for (int p = 1; p <= m; p++){
			if (star[l][p] =='*') {
				if(star[l+1][p] =='*' && star[l][p+1] =='*' && star[l-1][p] =='*' && star[l][p-1] =='*' && l+1<=z && p + 1<=m && l-1>= 1 && p-1 >= 1){
				totalStar ++;
				}
			}
		}
	}
	printf ("%d\n", totalStar);
	return 0;
}

