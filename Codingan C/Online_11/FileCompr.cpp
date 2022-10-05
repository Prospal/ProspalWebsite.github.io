#include<stdio.h>

int main(){
	FILE *fp;
	fp=fopen("testdata.in", "r");
	int t;
	fscanf(fp, "%d\n", &t);
	for(int x=1; x<=t; x++){
		int n,m;
		fscanf(fp, "%d %d\n", &n, &m);
		char matrix[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				fscanf(fp, " %c", &matrix[i][j]);
			}
		}
		int top=-1, bottom=-1, left=-1, right=-1;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (matrix[i][j] == '.')
					continue;
				else {
					if (top == -1){
						top=i; 
						bottom=i; 
						left=j; 
						right=j;
					} else {
						if (top > i) top=i;
						if (left > j) left=j;
						if (bottom < i) bottom=i;
						if (right < j) right=j;
					}
				}
			}
		}
		printf("Case #%d:\n", x);
		int a = bottom-top+1;
		int b = right-left+1;
		printf("%d %d\n", a, b);
		for (int i=top; i<=bottom; i++){
			for (int j=left; j<=right; j++){
				printf("%c", matrix[i][j]);
			}
		printf("\n");
		}
	}
	fclose(fp);
	return 0;
}
