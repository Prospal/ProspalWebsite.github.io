#include <stdio.h>

int main(){
	int jml=0;
	int tes,n,j;
	FILE *p;
	p = fopen("testdata.in","r");
	fscanf(p,"%d\n",&tes);
	int area=0,area1=0,kell=0,kell1=0,kell2=0;
	for(int i=0;i<tes;i++){
		fscanf(p,"%d\n",&n);
		int arr[n];
		for(j=0;j<n;j++){
			fscanf(p,"%d",&arr[j]);
			area+=arr[j];
		}
		fscanf(p,"\n");
		area1= area * 4;
		for(int k=0;k<n;k++){
			kell  += (8*arr[k]) - ((arr[k]-1)*4);
		}
		for(int g=0;g<n-1;g++){
			if(arr[g]>=arr[g+1]){
				kell1 += arr[g+1]*4;
			}else if(arr[g]<=arr[g+1]){
				kell1 += arr[g] *4;
			}
		}
		kell2 = kell - kell1;
		printf("Case #%d: %d %d\n",i+1,kell2,area1);
		area=0,area1=0,kell=0,kell1=0,kell2=0;
	}
	fclose(p);
	return 0;
}
