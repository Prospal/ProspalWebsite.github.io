#include <stdio.h>
void merge(unsigned long long int arr[], unsigned long long int l, unsigned long long int m,unsigned long long int r){
	unsigned long long int n1, n2;
	n1 = m - l + 1;
	n2 = r - m;
	
	unsigned long long int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i] = arr[l+i];
	}
	for(int j=0; j<n2; j++){
		R[j] = arr[m+1+j];
	}
	
	unsigned long long int i=0, j=0, k=l;
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

void mergeSort(unsigned long long int arr[], unsigned long long int l, unsigned long long int r){
	if(l<r){
		unsigned long long int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
int main (){
	unsigned long long int tes;
	scanf("%llu",&tes);
	for(int i=0;i<tes;i++){
	unsigned long long int banyak;
		scanf("%llu",&banyak);
		unsigned long long int a[banyak],b[banyak];
		for(int j=0;j<banyak;j++){
			scanf("%llu",&a[j]);
		}
		for(int j=0;j<banyak;j++){
			scanf("%llu",&b[j]);
		}
		mergeSort(a,0,banyak-1);
		mergeSort(b,0,banyak-1);
		unsigned long long int sum=0;
		for(int j=0;j<banyak;j++){
			sum+=a[j]*b[banyak-j-1];
		}
		printf("Case #%d: %llu\n",i+1,sum);
	}
	return 0;
}
