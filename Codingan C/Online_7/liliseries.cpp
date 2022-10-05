#include<stdio.h>
int count=0;
int print(int num){
	if(num==3){
		count++;
	}	
	if (num==4){
		count++;
	}
	if (num<0){
		return 0;
	} else if (num==0){
		return 1;
	} else if (num==1){
		return 2;
	} else if (num%3==0){
		return print(num-(num/3)) + 1;
	} else{
		return print(num-1) + num + print(num-2) + 1;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	int z;
	int a;
	for (int i=1; i<=t; i++){
		scanf("%d", &z);
		a = print(z);
		printf("Case #%d: %d %d\n", i, a, count);
		count=0;
	}
	
	return 0;
}
