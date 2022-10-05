#include <stdio.h>

int main(){
	long long c,d;
	long long jumlah = 1;
	long long x[500][500];
	long long t[1000];
	
	scanf("%lld %lld", &c, &d);
	
	for (int i = 1 ; i <= c ; i++){
		for (int j = 1 ; j <= d ; j++){
			scanf("%lld", &x[i][j]);
			t[j]+= x[i][j];
		}
	}
	for (int i = 1 ; i <= d ; i++){
		t[i]%=1000000007;
		jumlah = jumlah*t[i];
		jumlah%=1000000007;
	}
	
	printf("%lld\n", jumlah);
	
	return 0;
}
