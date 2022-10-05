#include <stdio.h>
#include <string.h>

int main (){
	long int tes,count=0;
	scanf("%ld",&tes);
	
	char a[tes][20],b[tes][20];
	for(int i=0;i<tes;i++){
		scanf("%s %s",&a[i],&b[i]);
	}
	for(int i=0;i<tes;i++){
		for(int j=i+1;j<tes;j++){
			if((strcmp(a[i],a[j])==0)&&strcmp(b[i],b[j])==0){
				count+=1;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
