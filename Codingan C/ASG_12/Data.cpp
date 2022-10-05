#include <stdio.h>
#include <string.h>
int main (){
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=0;i<t;i++){
		int temp,x,y;
		char z[105];
		int banyak;
		scanf("%d",&banyak);
		getchar();
		char nama[105][55];
		int nomor[105]; 
		for(int j=0;j<banyak;j++){
			scanf("%[^#]#%d",nama[j],&nomor[j]);
			getchar();
		}
		for(int x=0;x<banyak;x++){
			for(int y = banyak-1; y>x ;y--){		
				if(nomor[y] < nomor[y-1]){
					temp = nomor[y];
					nomor[y] = nomor[y-1];
					nomor[y-1] = temp;
					strcpy(z,nama[y]);
					strcpy(nama[y],nama[y-1]);
					strcpy(nama[y-1],z);
				}
				if(nomor[y] == nomor[y-1]){
					if(strcmp(nama[y],nama[y-1]) < 0){
						strcpy(z,nama[y]);
						strcpy(nama[y],nama[y-1]);
						strcpy(nama[y-1],z);
					}
				}
			}
		}
		printf("Case #%d:\n",i+1);
		for(int j=0;j<banyak;j++){
			printf("%s - %d\n",nama[j],nomor[j]);
		}
		
	}
	return 0;
}
