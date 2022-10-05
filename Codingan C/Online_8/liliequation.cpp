#include <stdio.h>

int print(int m,int n){
	int sum;
	if (m<0 || n<0){
		return 0;
	}else if(m==0 || n==0){
		return 1;
	}else if(m>0 && n>0)
		return print(m-1,n-1)+print(m-1,n)+print(m,n-1);
	}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d\n",print(m,n));
	return 0;
}
