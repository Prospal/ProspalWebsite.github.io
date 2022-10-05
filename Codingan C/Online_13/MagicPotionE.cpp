#include<stdio.h>

void merge(long long int arr[], int l, int m, int r){
	int n1, n2;
	n1 = m - l + 1;
	n2 = r - m;
	
	int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i] = arr[l+i];
	}
	for(int j=0; j<n2; j++){
		R[j] = arr[m+1+j];
	}
	
	int i=0, j=0, k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		k++;
		i++;
	}
	while(j<n2){
		arr[k] = R[j];
		k++;
		j++;
	}
}

void mergeSort(long long int arr[], int l, int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int binarySearch(long long int arr[], int l, int r, long long int x){
	if(r>=l){
		int mid = l + (r-l) / 2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid]>x){
			return binarySearch(arr, l, mid-1, x);
		}
		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}

int main(){
	int tc;
	scanf("%d", &tc);
	long long int nA, nB, nC;
	long long int liter;
	int search;
	for(int i=0; i<tc; i++){
		scanf("%lld", &nA);
		long long int a[nA];
		for(int j=0; j<nA; j++){
			scanf("%lld", &a[j]);
		}
		scanf("%lld", &nB);
		long long int b[nB];
		for(int j=0; j<nB; j++){
			scanf("%lld", &b[j]);
		}
		scanf("%lld", &nC);
		long long int c[nC];
		for(int j=0; j<nC; j++){
			scanf("%lld", &c[j]);
		}
		scanf("%lld", &liter);
		
		mergeSort(c, 0, nC-1);
		long long int ans=0;
		for(int j=0; j<nA; j++){
			for(int k=0; k<nB; k++){
				search = binarySearch(c, 0, nC-1, liter-a[j]-b[k]);
				if(search!=-1){
					ans++;
				}
			}
		}
		printf("Case #%d: %lld\n", i+1, ans);
	}
	
	return 0;
}
