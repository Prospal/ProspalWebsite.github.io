#include <stdio.h>
int first(int arr[], int low, int high, int x, int n){ 
  if(high >= low){ 
    int mid = low + (high - low)/2;
    if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
      return mid; 
    else if(x > arr[mid]) 
      return first(arr, (mid + 1), high, x, n); 
    else
      return first(arr, low, (mid -1), x, n); 
  } 
  return -1; 
} 
  
int last(int arr[], int low, int high, int x, int n){ 
  if (high >= low){ 
  	int mid = low + (high - low)/2;
    if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x ) 
      return mid; 
    else if(x < arr[mid]) 
      return last(arr, low, (mid -1), x, n); 
    else
      return last(arr, (mid + 1), high, x, n);       
  } 
  return -1; 
} 

int main(){
	
	int tes,tes1;
	int aw,ter;
	int count;
	scanf("%d %d",&tes,&tes1);
	int a[tes],b;
	for(int i=0;i<tes;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<tes1;j++){
		scanf("%d",&b);
		aw=first(a,0,tes-1,b,tes);
		ter=last(a,0,tes-1,b,tes);	
		count = ter - aw +1;
		if(aw&&ter<1){
			printf("0\n");
		}else {
			printf("%d\n",count);
		}
	}
	
	return 0;
}
