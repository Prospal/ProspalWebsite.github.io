#include <stdio.h>
#include <string.h>
struct te{
	char nama[55];
	int nomor;
};

int main (){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int banyak;
		struct te tes[55];
		struct te temp;
		struct te temp1;
		char x[55]; 
		scanf("%d",&banyak);
		for(int j=0;j<banyak;j++){
			scanf("%[^#]#%d",tes[j].nama,&tes[j].nomor);
		}
		for(int x=0;x<banyak;x++){
			for(int y = banyak-1; y>x ;y--){
				
				if(tes[y].nomor > tes[y-1].nomor){
					temp = tes[y];
					tes[y] = tes[y-1];
					tes[y-1] = temp;
				}	
				if(tes[y].nomor == tes[y-1].nomor){
					if(strcmp(tes[y].nama,tes[y-1].nama) < 0){
						strcpy(temp1,tes[y].nama);
						strcpy(tes[y].nama,tes[y-1].nama);
						strcpy(tes[y-1].nama,temp1);
					}
				}
			}
		}
		printf("Case #%d:",i+1);
		for(int j=0;j<banyak;j++){
			printf("%s - %d",tes[j].nama,tes[j].nomor);
		}
	}
	
	return 0;
}
