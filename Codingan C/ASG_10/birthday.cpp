#include <stdio.h>
struct customer{
	char name[150];
	int date;
	int month;
	int cake;
};
int main (){
	int tes;
	scanf("%d",&tes);
	int n,kue,hari;
	struct customer cst[1009];
	for(int i=0;i<tes;i++){
		scanf("%d %d",&n,&kue);
		for(int j=0;j<n;j++){
			scanf("%s %d/%d %d", &cst[j].name ,&cst[j].date ,&cst[j].month ,&cst[j].cake);
		}
		scanf("%d",&hari);
		int D[hari+5],M[hari+5];
		for(int z=0;z<hari;z++){
			scanf("%d/%d",&D[z],&M[z]);
		}
		printf("Case #%d:\n",i+1);
		int temp=0;
		for(int a=0;a<hari;a++){
			for(int b=0;b<n;b++){
				if(D[a] == cst[b].date && M[a] == cst[b].month && cst[b].cake >= kue){
					temp++;
					printf("%s\n",cst[b].name);
				}
			}
			if(temp==0){
				printf("No one\n");
			}
			temp=0;
		}
	}
	return 0;
}
