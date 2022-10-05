#include <stdio.h>
#include <math.h>

int main(){
	long int tes;
	long long int a;
	long long int b;
	scanf("%ld", &tes);
	for(int i = 0 ; i < tes ; i++){
		scanf("%lld", &a);
		
		long long int left =0, right=pow(10, 7);
		while (left <= right) { 
			int cari = left + (right - left) / 2; 
			long double b = (1.0/6) * cari * (cari+1) * ((2*cari)+1);
	        long double c = (1.0/6) * (cari-1) * (cari+1-1) * ((2*(cari-1))+1);
	        if(b < a) left=cari+1;
			if(b >= a && c<a){
				printf("Case #%d: %lld\n", i+1, cari);
				break;
			}
			else if(b>a) right = cari-1;
		}
	}
	return 0;
}
