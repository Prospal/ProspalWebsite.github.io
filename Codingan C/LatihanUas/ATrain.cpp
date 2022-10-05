#include <stdio.h>
#include <string.h>

int main (){
	
	int tes;
	scanf("%d",&tes);
	char a[tes][105],b[tes][105],c[tes][105],d[tes][250];
	for(int i=0;i<tes;i++){
		scanf("%s %s",a[i],b[i]);
	}
	for(int j=0;j<tes;j++){
		scanf("%s %[^\n]",c[j],d[j]);
	}
	for(int x=0;x<tes;x++){
		printf("%s %s",a[x],b[x]);
		for(int y=0;y<tes;y++){
			if(strcmp(a[x],c[y])==0){
				printf(" %s\n",d[y]);
				break;
			}
		}
	}
	
	return 0;
}
