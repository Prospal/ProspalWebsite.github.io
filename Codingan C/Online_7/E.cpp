#include<stdio.h>
long long int fct(long long int x){
	long long int fa = 1; 
    if (x==0||x==1) 
        return 1; 
    for (int i=2; i<=x; i++) 
        fa = fa*i; 
    return fa; 
}
long long int sum (int a[], int z){
	long long int ft = fct(z);
	long long int dsum=0;
	for (int i=0; i<z; i++){
		dsum += a[i];
	}
	dsum *=(ft/z);
	
	long long int r=0;
	for(int i=1, k=1; i<=z; i++){
		r += (k*dsum);
		k = k*10;
	}
	return r;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	int a;
	int y[15];
	long long int total;
	for (int i=1; i<=t; i++){
		scanf("%d", &a);
		getchar();
		for (int j=0; j<a; j++){
			scanf("%d", &y[j]);
			getchar();
		}
		total = sum(y, a);
		printf("Case #%d: %lld\n", i, total);
	}
	return 0;
}
