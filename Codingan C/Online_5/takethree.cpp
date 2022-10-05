#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int T=1;T<=t;T++)
	{
		long n;
		scanf("%ld",&n);
		long arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&arr[i]);
		}
		int count[1001]={0};
		for(int i=0;i<n;i++)
		{
			count[arr[i]]++;
		}
		int ans=0,a=0,b=0,c=0,z=0,x=0;
		for(int i=1;i<=1000;i++)
		{
			if(count[i]>=3)
			{
			a=count[i];
			b=count[1]-1;
			c=count[i]-2;
			z=a*b*c;
			x=z/6;
			ans=ans+x;
			}
	 	}
	 	printf("Case #%d: %d\n",T,ans);
	}
return 0;
}
