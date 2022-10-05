#include <stdio.h>
#include <string.h>
struct buku{
	char isi[55];
	int halaman;
};
int main(){
	FILE *p ;
	p = fopen("testdata.in", "r");
	int hlmn, brs, page = 1;
	fscanf(p, "%d %d", &hlmn, &brs);
	buku row[brs+5];
	for(int i = 0; i < brs; i++){
		fgetc(p);
		fscanf(p, "%[^\n]", &row[i].isi);
		row[i].halaman = page;
		if(strcmp("#", row[i].isi) == 0){
			page++;
		}
	}
	int tes;
	fscanf(p, "%d\n", &tes);
	for(int i = 0; i < brs; i++){
		if(row[i].halaman == tes){
			if(strcmp("#", row[i].isi) == 0){
			break;
			}else {
				printf("%s\n",row[i].isi);
			}
		}
	}
	fclose(p);
	return 0;
}
