#include<stdio.h>
#include<string.h>
int main (){
	FILE *p;
	p=fopen("testdata.in","r");
	int temp;
	char z[1005],z1[1005];
	char judul[105][1005];
	char nama[105][1005];
	int nomor[105];
	int i=0;
	while(!feof(p)){
	fscanf(p,"%[^#]#%[^#]#%d\n",judul[i],nama[i],&nomor[i]);
	i++;
	}
	for(int x=0;x<i;x++){
		for(int y = i-1; y>x ;y--){		
			if(nomor[y] > nomor[y-1]){
				temp = nomor[y];
				nomor[y] = nomor[y-1];
				nomor[y-1] = temp;
				strcpy(z,judul[y]);
				strcpy(judul[y],judul[y-1]);
				strcpy(judul[y-1],z);
				strcpy(z1,nama[y]);
				strcpy(nama[y],nama[y-1]);
				strcpy(nama[y-1],z1);
			}
			if(nomor[y] == nomor[y-1]){
				if(strcmp(judul[y],judul[y-1]) < 0){
					strcpy(z,judul[y]);
					strcpy(judul[y],judul[y-1]);
					strcpy(judul[y-1],z);
					strcpy(z1,nama[y]);
					strcpy(nama[y],nama[y-1]);
					strcpy(nama[y-1],z1);
				}
			}
		}
	}
	for(int a=0;a<i;a++){
		printf("%s by %s - %d\n",judul[a],nama[a],nomor[a]);
	}
	fclose(p);
	
	return 0;
}
