#include<stdio.h>
#include<string.h>
int min (int ax, int by, int cz){
	if (ax<=by && ax<=cz){
		return ax;
	} else if (by<=cz && by<=ax){
		return by;
	} else {
		return cz;
	}
}
int lD(char a[], char b[], int i, int j){
	if(a==0 && b==0){
		return 0;
	} 
	if(i==0){
		return j;
	}
	if(j==0){
		return i;
	}
	int x = lD(a, b, i-1, j-1) + (a[i-1] != b[j-1]);
	int y = lD(a, b, i-1, j) + 1;
	int z = lD(a, b, i, j-1) + 1;
	return min(x, y, z);
}

int main(){
	int tc;
	scanf("%d", &tc);
	char a[15];
	char b[15];
	int jarak;
	for (int i=1; i<=tc; i++){
		scanf("%s %s", &a, &b);
		getchar();
		int la = strlen(a);
		int lb = strlen(b);
		jarak = lD(a, b, la, lb);
		printf("Case #%d: %d\n", i, jarak);
	}
	return 0;
}
