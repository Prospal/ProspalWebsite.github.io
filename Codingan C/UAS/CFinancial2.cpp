#include<stdio.h>
#include<string.h>

struct data{
	char grup[5];
	char nama[30];
	int dana;
}dt[55];

int main(){
	
	FILE *fp = fopen("testdata.in", "r");
	int tes;
	fscanf(fp, "%d", &tes);
	char code[5];
	for(int i=0; i<tes; i++){
        fscanf(fp," %[^,],%[^,],%d", dt[i].grup, dt[i].nama, &dt[i].dana);
    }
    fscanf(fp,"%s", code);
    
    int count=0, jumlah=0;
    for(int i=0; i<tes; i++){
        if(strcmp(dt[i].grup, code)==0){
            count++;
            jumlah += dt[i].dana;
            printf("%s %s %d\n", dt[i].grup, dt[i].nama, dt[i].dana);
        }
    }
    printf("Total Recipients: %d\n", count);
    printf("Total Amount: %d\n", jumlah);
    
	
	return 0;
}

