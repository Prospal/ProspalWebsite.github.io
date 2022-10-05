#include <stdio.h>
#include <string.h>

struct data{
	char accNum[10];
	char nama[30];
	int umur;
	double saldo;
};data datas[1005];

int main (){
	
	long long int tes;
	scanf("%lld",&tes);
	for(int i=0;i<tes;i++){
		scanf("%[^,], %[^,],%d,%lf",datas[i].accNum, datas[i].nama, &datas[i].umur, &datas[i].saldo);
	}
	int n;
	scanf("%d",&n);
	
	for(int j=0;j<n;j++){
		char e[1005];
		scanf("%s",e);
		int found=0;
		for(int x=0;x<=tes;x++){
			if(datas[x].accNum==e){
				printf("%s %d %s",datas[x].nama,datas[x].umur,datas[x].saldo);
				found=1;
				break;
			}if(x==tes && found == 0){
				printf("-1");
			}
		}printf("\n");
	}
	
	return 0;
}
