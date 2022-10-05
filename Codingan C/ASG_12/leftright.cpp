#include <stdio.h>
long long int binarySearch(long long int arr[], int l, int r, long long int x){
	if(r>=l){
		int mid = l + ((r-l)+1)/ 2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid]>=x){
			return binarySearch(arr, l, mid-1, x);
		}
		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}

int main(){
	int a,b,i,j;
	int result;
	int tempM,right,result1;
	scanf("%d %d",&a,&b);
	long long int N[a],M[b];
	for(i=1;i<=a;i++){
		scanf("%lld",&N[i]);
	}
	for(j=0;j<b;j++){
		scanf("%lld",&M[j]);
		tempM=M[j];
		if(M[j]==N[1]){
			result=1;
			printf("%d",result);
		}else{
			result = binarySearch(N,0,a,tempM);
			printf("%d",result);
		}
		if(M[j]!=N[j]){
			right=result;
			printf("%d",right);
		}else {
			while(M[j] == N[j]){
				j=result;
				j++;
				right=j;
				break;
			}
			printf(" %d\n",right);
		}
	}

	return 0;
}
