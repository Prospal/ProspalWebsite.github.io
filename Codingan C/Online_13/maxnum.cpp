#include <stdio.h>
void merge(int arr[], int l, int m, int r){
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

void mergeSort(int arr[], int l, int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	int ay[a],by;
	for(int i=0;i<a;i++){
		scanf("%d",&ay[i]);
	}
	for(int i=0;i<b;i++){
		scanf("%d",&by);
		for(int j=0;j<a;j++){
			if(by==ay[j]){
				ay[j]=-1;
			}
		}
	}
	mergeSort(ay,0,a-1);
	printf("Maximum number is %d\n",ay[a-1]);
	
	return 0;
}
