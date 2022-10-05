#include <stdio.h>
#include <string.h>

struct data{
	char grup[4];
	char nama[21];
	int dana;
};

int main (){
	data dt[51];
	int tes;
	char tc[4];
	
	FILE *p = fopen("testdata.txt","r");
	
	fscanf(p,"%d",&tes);
	
	for(int i=0;i<tes;i++){
		fscanf(p, "%[^,],%[^,],%d\n", dt[i].grup, dt[i].nama, &dt[i].dana);
	}
	
	fscanf(p,"%s",tc);
	int total1=0, total2=0;
	
	for(int i=0;i<=tes;i++){
		if(strcmp(tc,dt[i].grup)==0){
			printf("%s %s %d\n",dt[i].grup,dt[i].nama,dt[i].dana);
			total1++;
			total2 += dt[i].dana;
		}
	}
	printf("Total Recipients: %d\n",total1);
	printf("Total Amount: %d\n",total2);
 
	fclose(p);
 
	
	return 0;
}

