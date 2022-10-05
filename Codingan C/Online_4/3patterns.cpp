#include <stdio.h>
int main (){
	int i,j,t,t1;
	scanf("%d %d",&t,&t1);
	for(i=1;i<=t;i++){
		for(j=1;j<=t;j++){
			printf("#");
		}printf("\n");
	}printf("\n");

	for(i=1;i<=t;i++){
		for(j=1;j<=t;j++){
			if(i%t1!=0){
			printf(".");
			}	
		}
		for(j=1;j<=t;j++){
			if(i%t1==0){
				printf("#");	
			}
		}printf("\n");
	}printf("\n");
	
	for(i=1;i<=t;i++){
		for(j=1;j<=t;j++){
			 if (j % t1 != 0){
    			printf(".");
  			}
		     if(j % t1 == 0){
    			printf("#");
			}	
		}printf("\n");
	}
	return 0;
}
	


