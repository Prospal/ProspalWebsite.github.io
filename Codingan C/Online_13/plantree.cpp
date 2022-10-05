#include <stdio.h>
#include <string.h>
int main (){
	int t;
	FILE *p;
	p = fopen("testdata.in","r");
	fscanf(p,"%d\n",&t);
	char kata[t][1005];
	char z[1005];
	int a[1005];
	int ay;
	for(int i=0;i<t;i++){
		fscanf(p,"%d#%[^\n]\n",&a[i],kata[i]);	
	}
//	for(int j=0;j<t;j++){
//		printf("%d %s\n",a[j],kata[j]);
//	}
	for(int x=0;x<t;x++){
		for(int y = t-1; y>x ;y--){		
			if(strcmp(kata[y],kata[y-1])<0){
				strcpy(z,kata[y]);
				strcpy(kata[y],kata[y-1]);
				strcpy(kata[y-1],z);
				ay = a[y];
				a[y] = a[y-1];
				a[y-1] = ay;
			}
		}
	}
	for(int j=0;j<t;j++){
		printf("%d %s\n",a[j],kata[j]);
	}
	fclose(p);
	return 0;
}
