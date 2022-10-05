#include <stdio.h>
long long int dcg(long long int x,long long int y){
	if(y !=0){
		return dcg(y, x%y);
	}else {
		return x;
	}
}
long long int lc(long long int temp, long long int hasil){
	hasil = (temp*hasil)/dcg(temp,hasil);
	return hasil;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i =1 ; i<= t;i++){
		int z;
		scanf("%d",&z);
		long long int hasil = 1;
		for(int j=0;j<z;j++){
			long long int temp;
			scanf("%lld",&temp);
			hasil = lc(temp, hasil);
		}
		printf("Case #%d: %lld\n",i,hasil);
	}
	return 0;
}
