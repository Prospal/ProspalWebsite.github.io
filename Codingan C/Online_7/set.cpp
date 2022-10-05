#include <stdio.h>
int main (){
	int t;
	scanf("%d",&t);
	int a[t];
	int x,l;
	for(int i=0;i<t;i++){
		scanf("%d %d",&x,&l);
		int max = 0, n[1009]={0},c=1;
		n[0]=x;
		for(int j=0;n[j]<=l;j++){
			n[c]=n[j]*3;
			c++;
			n[c]=n[j]*4;
			c++;
			n[c]=n[j]*5;
			c++;
		}
		for(int j=0;j<c;j++){
			if(n[j]<=l && n[j]>max){
				max = n[j];
			}
		}
		printf("Case #%d: %d\n",i+1,max);
	}
	return 0;
}
