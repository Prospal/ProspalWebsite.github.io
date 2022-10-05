#include <stdio.h>
#include <string.h>
int main(){
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		char a[1005];
		scanf(" %[^\n]s",&a);
		printf("Case #%d: ",i+1);
		for(int j=strlen(a)-1;j>=0;j--){
			printf("%c",a[j]);
		}
		printf("\n");
	}
	return 0;
}

