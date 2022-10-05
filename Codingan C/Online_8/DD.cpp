#include <stdio.h>
void rs(int no,int i){
	if(no==0){
		return;
	}else {
		rs(no/2 , i+no/2);
		for (int k = 0;k<i;k++){
			printf(" ");
		}
		for(int z=0;z<no;z++){
			printf("*"); 
		}
		printf("\n");
		rs(no/2,i);
	}
}
int main(){
	int no;
	scanf("%d",&no);
	rs(1 << no,0);
	return 0;
}
