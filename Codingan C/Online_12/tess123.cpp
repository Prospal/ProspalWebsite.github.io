#include<stdio.h>
#include<string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	int n;
	char name[55][55];
	int num[55];
	int temp;
	char tempString[55];
	for(int i=0; i<tc; i++){
		scanf("%d", &n);
		getchar();
		for(int j=0; j<n; j++){
			scanf("%[^#]#%d", name[j], &num[j]);
			getchar();
		}
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				if(num[j]>num[k]){
					temp = num[j];
					num[j] = num[k];
					num[k] = temp;
					
					strcpy(tempString, name[j]);
					strcpy(name[j],name[k]);
					strcpy(name[k], tempString);
				}
				if(num[j]==num[k]){
					if(strcmp(name[j],name[k])<0){
						strcpy(tempString, name[j]);
						strcpy(name[j], name[k]);
						strcpy(name[k], tempString);
					}
				}	
			}
		}
		printf("Case #%d:\n", i+1);
		for(int j=0; j<n; j++){
			printf("%s - %d\n", name[j], num[j]);
		}
	}
	
	return 0;
}
