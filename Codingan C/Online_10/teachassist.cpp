#include <stdio.h>

int main (){
	int tes;
	scanf("%d",&tes);
	for(int i=0;i<tes;i++){
		int a;
		scanf("%d",&a);
		char b[a][20];
		int z[a];
		for(int j=0;j<a;j++){
			scanf("%s %d",&b[j],&z[j]);
		}
		printf("Case #%d:\n",i+1);
		for(int x=1;x<=20;x++){
			int count=0;
			for(int y=0;y<a;y++){
				if(z[y]==x){
					count++;
				}
			}
			if(count>0){
				printf("Group %d(%d):\n",x,count);
				for(int y=0;y<a;y++){
					if(z[y]==x){
						printf("%s\n",b[y]);
					}
				}
			}
		}
	}
	return 0;
}
