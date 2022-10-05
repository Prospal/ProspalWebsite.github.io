#include <stdio.h>

int main()
{
	int testcase,j=1;
	long long input;
	long number;
	scanf("%d",&testcase);
	for (j=0;j<testcase;j++)
	{
		scanf("%ld",&number);
		long long arr[number],r_arr[number];
		for(int i=0;i<number;i++){
			scanf("%lld",&input);
			arr[i]= input;
		}
		printf("Case # %d :",j+1);
		for (int i=number-1;i>0;i--){
			printf("% lld %lld",arr[i-1],arr[i]);
			i=i-1;
		}
	}
	printf("\n");
return 0;
}
