#include <stdio.h>
#include <string.h>
int main (){
	
	int tes;
	scanf("%d",&tes);
	char a[1005][105],b[1005][105],c[105];
	for(int i=0;i<tes;i++){
		scanf("%[^@]@%s",a[i],b[i]);
		getchar();
	}
	scanf("%s",c);
	int count=0;
	for(int i=0;i<tes;i++){
		if(strcmp(b[i],c)==0){
			count+=1;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
