#include<stdio.h>
#include<math.h>
int findNumberOfTriangles(int a[], int n){
    int count = 0;
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
            for (int k = j + 1; k < n; k++) 
                if ( 
                    a[i] + a[j] > a[k] 
                    && a[i] + a[k] > a[j] 
                    && a[k] + a[j] > a[i]) 
                    count++; 
        } 
    return count; 
}
int main(){
	FILE *p;
	p = fopen("testdata.txt", "r");
    int tes,count;
    fscanf(p,"%d\n",&tes); 
    int a[tes];
    int size = sizeof(a) / sizeof(a[tes]); 
    for(int i=0;i<tes;i++){
    	fscanf(p,"%d",&a[i]);
	}
	findNumberOfTriangles(arr, size); 
	if(count>0){
		printf("Yes\n");
	}else{
		printf("NO\n");
	}	
    fclose(p);
    return 0;
}
