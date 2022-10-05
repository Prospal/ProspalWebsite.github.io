#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tes{
	char eng[110];
	char idn[110];
};

int main(){
	
	int tc,banyak,kalimat;
	char a[110][110],b[110];
	
	scanf("%d",&tc);
	for(int i=0 ;i<tc ;i++){
		scanf("%d", &banyak); 
		struct tes data[banyak];
		
		for(int j = 0 ; j < banyak ; j++){
			scanf("%s %s",data[j].eng,data[j].idn);
		}
		
		scanf("%d",&kalimat);
		for(int j = 0 ; j < kalimat ; j++){
			scanf("%s",a[j]);
		}
		
		printf("Case #%d: ",i+1);
		for(int j = 0 ; j < kalimat ; j++){
			strcpy(b,a[j]);
			for(int x = 0 ; x < banyak ; x++){
				if(strcmp(a[j],data[x].eng)==0){
					strcpy(b,data[x].idn);
				}
			}
			printf("%s",b);
			
			if(j!=kalimat-1){
				printf(" ");
			}else {
				printf("\n");
			}		
		}	
	}
	
	return 0;
}

