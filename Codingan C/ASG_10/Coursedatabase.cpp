#include <stdio.h>
struct mapel{
	char kode[15];
	char nama[105];
	char credits[10];
};
int main (){
	int tes,i;
	scanf("%d",&tes);
	struct mapel mpl[tes];
	for(i=0;i<tes;i++){
		scanf("%s",mpl[i].kode);getchar();
		scanf("%[^\n]",mpl[i].nama);getchar();
		scanf("%s",mpl[i].credits);getchar();
	}
	int tes1;
	scanf("%d",&tes1);getchar();
	int id;
	for(int k=0;k<tes1;k++){
		scanf("%d",&id);getchar();
			printf("Query #%d:\n",k+1);
			printf("Code: %s\n",mpl[id-1].kode);
			printf("Name: %s\n",mpl[id-1].nama);
			printf("Credits: %s\n",mpl[id-1].credits);
	}
	return 0;
	
}
