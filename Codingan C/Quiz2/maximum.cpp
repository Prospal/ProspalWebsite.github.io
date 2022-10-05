#include<stdio.h>
long long int binarySearch(long long int arr[],long long int l,long long int r, long long int x) { 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) {
            while(arr[mid-1]==x) {
                mid = mid - 1;
            }    
            return mid+1; 
          }
        else if (arr[mid] > x) {
            if(mid==0 || arr[mid-1] < x) {
                return mid+1;
            }
            else {
                return binarySearch(arr, l, mid-1, x);    
            }
        }
        else {
            return binarySearch(arr, mid + 1, r, x);
        } 
    }
     
    return -1; 
} 

int main(){
	long long int n, m;
	scanf("%lld %lld", &n, &m);
	getchar();
	long long int aN[n],aM,a,i;
	for(long long int z=0; z<n; z++){
		scanf("%lld", &aN[z]);
		getchar();
		if(z>=1){
			if(aN[z]<aN[z-1]){
				aN[z]=aN[z-1];
			}
		}
	}
	for(int x=0; x<m; x++){
		scanf("%lld", &aM);
		getchar();
		a = binarySearch(aN, 0, n-1, aM);
		printf("%lld\n", a);
	}
	return 0;
}
