#include <stdio.h>

int rect(int a, int b)
{
	return (b * a * (a + 1) * (b + 1)) / 4;
}

int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",rect(a,b));
	
	return 0;
}
