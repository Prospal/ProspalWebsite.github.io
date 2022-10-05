#include <stdio.h>
#include <math.h>
int main() 
{
	int a,b;
	int t,sum;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		sum=0;
		for(int row=a-1;row<b;row++){
			sum+=pow(2,row);
		}
		printf("Case #%d: %d\n",i+1,sum);	
	} 
    return 0; 
} 
