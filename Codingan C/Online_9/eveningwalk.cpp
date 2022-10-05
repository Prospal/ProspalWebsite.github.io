#include <stdio.h>
int main(){
	int a,b,i,j,count=0;
	scanf("%d %d",&a,&b);
	char tes;
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			scanf("%c", &tes);
			if(tes == '.' ){
				count++;
			}else if(tes == 'E' ){
				count++;
			}else {
				count+=0;
			}
		}
	}
	printf("%d\n",count);
	return 0;
	
}
