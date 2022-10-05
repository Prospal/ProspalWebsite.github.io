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

int binarySearch(int arr[], int l, int r, int x){
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
int main  (){
	int tes;
	scanf("%d",&tes);
	getchar();
	for(int i=0;i<tes;i++){
		int n;
		scanf("%d",&n);
		getchar();
		int arr[1010],unsort[1010],final[1010],temp[1010];
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);getchar();
			unsort[j]=arr[j];
		}
		mergeSort(arr,0,n-1);
		for(int j=0;j<n;j++){
			temp[j]=arr[j];
		}
		int count=1;
		for(int j=0;j<n;j++){
			if(temp[j]<temp[j+1]){
				temp[j]=count;
				count++;
			}else{
				temp[j]=count;
			}
		}
		int x,y;
		for(int j=0;j<n;j++){
			x=unsort[j];
			y=binarySearch(arr,0,n-1,x);
			final[j]=temp[y];
		}
		printf("Case #%d:",i+1);
		for(int j=0;j<n;j++){
			printf(" %d",final[j]);
		}
		printf("\n");
	}
	
	return 0;
}
