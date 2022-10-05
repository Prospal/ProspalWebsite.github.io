#include<stdio.h>

int main()
{
	long long int T,z,x,bnum,res[1001] = {0},ress = 0;
	scanf("%lld",&T);
	for(int i = 0; i <T; i++)
	{
    	scanf(" %lld",&z);
   		for(int j = 0; j < z; j++)
		{
   		scanf(" %lld",&x);
   		res[x]++;
  		}
  	for(int j = 1; j <= 1000; j++){
   	if(res[j] > 3){
    ress += (res[j] * (res[j]-1) * (res[j]-2))/6;
   	}
   	else if(res[j] == 3){
    ress++;
   	}
   	res[j] = 0;
  	}
 	printf("Case #%d: %lld\n", i+1,ress);
 	ress = 0;
 	}
return 0;
}
