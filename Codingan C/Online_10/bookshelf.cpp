#include <stdio.h>
# include <string.h>

struct bs{
	long long int id;
	char judul[10];
	char thor[10];
	int pemilik;
};
int main (){
	int tes;
	scanf("%d",&tes);
	for(int t=0;t<tes;t++){
		long long int bibis,lilis;
		scanf("%lld",&lilis);
		struct bs lili[lilis];
		for(int j=0;j<lilis;j++){
			scanf("%lld ",&lili[j].id);
			scanf("%s ",&lili[j].judul);
			scanf("%s",&lili[j].thor);
			lili[j].pemilik=0;
		}
		scanf("%lld",&bibis);
		struct bs bibi[bibis];
		for(int j=0;j<bibis;j++){
			scanf("%lld ",&bibi[j].id);
			scanf("%s ",&bibi[j].judul);
			scanf("%s",&bibi[j].thor);
			bibi[j].pemilik = 1;
		}
		struct bs berdua[lilis+bibis];
		
		long long int i=0,j=0,k=0;
		while(i<lilis && j<bibis){
			if(lili[i].id>bibi[j].id){
				berdua[k]=bibi[j];
				k++;j++;
			}else if(bibi[j].id>lili[i].id){
				berdua[k]=lili[i];
				i++;k++;
			}else if(bibi[j].id==lili[i].id){
				int temp;
				temp = strcmp(lili[i].judul,bibi[j].judul);
				if(temp > 0){
					berdua [k] = bibi[j];
					k++;j++;
				}else{
					berdua[k] = lili [i];
					i++;k++;
				}
			}
		}
		while(lilis>i){
			berdua[k] = lili[i];
			k++;i++;
		}
		while(bibis>j){
			berdua[k] = bibi[j];
			j++;k++;
		}
		printf("Case #%d:\n",t+1);
		for(long long int i=0;i<lilis+bibis;i++){
			if(berdua[i].pemilik==1){
				printf("%d\n",i+1);
			}
		}
	}
	return 0;
}
