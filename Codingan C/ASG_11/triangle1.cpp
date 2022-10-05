#include<stdio.h>

int findNumberOfTriangles(long long int arr[], long long int n){ 
    int count = 0; 
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
            for (int k = j + 1; k < n; k++) 
                if ( 
                    arr[i] + arr[j] > arr[k] 
                    && arr[i] + arr[k] > arr[j] 
                    && arr[k] + arr[j] > arr[i]) 
                    count++; 
        } 
    } 
    return count; 
} 

int main(){ 
	FILE *p;
	long long int size;
	p = fopen("testdata.in","r");
	fscanf(p,"%lld\n", &size);
	long long int arr[55];
	for(int i=0; i<size; i++){
		fscanf(p,"%lld ", &arr[i]);
	}
	long long int bykTri = findNumberOfTriangles(arr, size);
	if (bykTri>0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	fclose(p);
    return 0; 
}
