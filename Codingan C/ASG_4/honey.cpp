#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a[t],b[t];
    for(int i=0;i<t;i++){
    	scanf("%d %d",&a[i],&b[i]);
    	int botol = a[i],free = 0;
    	while(botol/b[i]>0){
    		free+= botol/b[i];
    		int temp = botol / b[i];
    		botol = (botol % b[i])+temp;
		}
		printf("Case #%d: %d\n",i + 1, a[i] + free);
	}
	return 0;
}
