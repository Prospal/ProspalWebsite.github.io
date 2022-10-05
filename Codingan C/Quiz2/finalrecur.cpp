#include <stdio.h>

int a(int z){
	if(z==0){
		return 0;
	}else {
		return a(z-1)+1;
	}
}

int main (){
	int z;
	scanf("%d",&z);
	printf("%d\n",a(z));
	return 0;
}
