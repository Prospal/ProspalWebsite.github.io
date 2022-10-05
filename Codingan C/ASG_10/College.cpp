#include <stdio.h>

struct studen{
	char nama[105];
	char nim[15];
	int umur;
	char kodepos[10];
	char tl[105];
	char tempat[105];
	char almameter[105];
	int saukan;
	int tinggi;
	char norek[15];
	
};

int main (){
	int tes;
	scanf("%d",&tes);getchar();
	struct studen std[tes];
	for(int i=0;i<tes;i++){
		scanf("%[^\n]",std[i].nama);getchar();
		scanf("%s",std[i].nim);getchar();
		scanf("%d",&std[i].umur);getchar();
		scanf("%s",std[i].kodepos);getchar();
		scanf("%[^\n]",std[i].tempat);getchar();
		scanf("%s",std[i].tl);getchar();
		scanf("%[^\n]",std[i].almameter);getchar();
		scanf("%d",&std[i].saukan);getchar();
		scanf("%d",&std[i].tinggi);getchar();
		scanf("%s",std[i].norek);getchar();
		printf("Mahasiswa ke-%d:\n",i+1);
		printf("Nama: %s\n",std[i].nama);
		printf("NIM: %s\n",std[i].nim);
		printf("Umur: %d\n",std[i].umur);
		printf("Kode Pos: %s\n",std[i].kodepos);
		printf("Tempat Lahir: %s\n",std[i].tempat);
		printf("Tanggal Lahir: %s\n",std[i].tl);
		printf("Almamater SMA: %s\n",std[i].almameter);
		printf("Jumlah Saudara Kandung: %d\n",std[i].saukan);
		printf("Tinggi Badan: %d\n",std[i].tinggi);
		printf("NOMOR REKENING: %s\n",std[i].norek);
	}
	return 0;
}
