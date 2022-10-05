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
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=0;i<t;i++){
		int N;
		scanf("%d",&N);
		getchar();
		int a[1010],usrt[1010],hasil[1010],temp[1010];
		for(int z=0;z<N;z++){
			scanf("%d",&a[z]);getchar();
			usrt[z]=a[z];
		}
		mergeSort(a,0,N-1);
		for(int z=0;z<N;z++){
			temp[z]=a[z];
		}
		int count=1;
		for(int z=0;z<N;z++){
			if(temp[z]<temp[z+1]){
				temp[z]=count;
				count++;
			}else{
				temp[z]=count;
			}
		}
		int x,y;
		for(int z=0;z<N;z++){
			x=usrt[z];
			y=binarySearch(a,0,N-1,x);
			hasil[z]=temp[y];
		}
		printf("Case #%d:",i+1);
		for(int z=0;z<N;z++){
			printf(" %d",hasil[z]);
		}
		printf("\n");
	}
	
	return 0;
}
