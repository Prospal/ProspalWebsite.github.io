#include <stdio.h>
float Find_median(long long int arr[] , long long int n)
{
    float median=0;
    
    if(n%2 == 0)
        median = (arr[(n-1)/2] + arr[n/2])/2.0;
    else
        median = arr[n/2];
    
    return median;
}

int main (){
	
	int t,i,j;
	long int n;
	scanf("%d",&t);
	for(int tes=0;tes<t;tes++){
		double mean=0,hasilmean=0;
		double temp,median=0;
		scanf("%ld",&n);
		long long int arr[n];
		for(int a=0;a<n;a++){
			scanf("%lld",&arr[a]);	
		}
    	for(i=0 ; i<n ; i++){
        	for(j=0 ; j<n-1 ; j++){
            	if(arr[j]>arr[j+1]){
                temp        = arr[j];
                arr[j]    = arr[j+1];
                arr[j+1]  = temp;
            	}
        	}
    	}
		for(int a=0;a<n;a++){
			mean+=arr[a];
		}
		printf("Case #%d:\n",tes+1);
		hasilmean = mean / n;
		printf("Mean : %.2lf\n",hasilmean);
		median = Find_median(arr, n);
		printf("Median : %.2lf\n",median);
		}
		
	return 0;
}
