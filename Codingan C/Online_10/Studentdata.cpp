#include <stdio.h>
#include <string.h>

struct studen{
	int id;
	int date;
	int month;
	int year;
	char nama[20];
	char address[20];
};

int main (){
	int tes;
	scanf("%d",&tes);
	struct studen std[tes];
	for(int i=0;i<tes;i++){
		scanf("%d",&std[i].id);
		scanf("%d",&std[i].date);
		scanf("%d",&std[i].month);
		scanf("%d",&std[i].year);
		scanf("%s",&std[i].nama);getchar();
		scanf("%s",&std[i].address);getchar();
	}
	
	int tes1,i,x,y;;
	scanf("%d",&tes1);
	int a[tes1];
	for(i=0;i<tes1;i++){
		int id1;
		scanf("%d",&id1);
		a[i]=id1;
	}
	for(y=0;y<tes1;y++){
		int found=0;
		for(i=0;i<tes;i++){
			if(std[i].id == a[y]){
				found=1;
				break;
			}
		}
		if(found){
			for(x=0;x<=strlen(std[i].nama);x++){
				if(std[i].nama[x]>=65 && std[i].nama[x]<=90){
					std[i].nama[x] = std[i].nama[x] + 32;
				}
			}
			for(x=0;x<=strlen(std[i].address);x++){
				if(std[i].address[x]>=65 && std[i].address[x]<=90){
					std[i].address[x] = std[i].address[x] + 32;
				}
			}
			printf("%d. %s was born on %d/%d/%d and live at %s\n",std[i].id,std[i].nama,std[i].date,std[i].month,std[i].year,std[i].address);
		}else{
			printf("No data found!\n");
		}
	}
	return 0;
}
