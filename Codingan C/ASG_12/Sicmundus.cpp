#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>



long long int findMinDiff(long long int arr[], int n) 
{ 
   int diff = INT_MAX; 
   for (int i=0; i<n-1; i++) 
      for (int j=i+1; j<n; j++) 
          if (abs(arr[i] - arr[j]) < diff) 
                diff = abs(arr[i] - arr[j]); 
   return diff; 
} 

int main (){
	int t;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		long long int tes;
		scanf("%d",&tes);
		long long int arr[105];
		for(int b=0;b<tes;b++){
			scanf("%lld",&arr[b]);
		}
		long long int x=0;
		x = findMinDiff(arr,tes);
		printf("Case #%d: %lld\n",a+1,x);
	}
	
	return 0;
} 
