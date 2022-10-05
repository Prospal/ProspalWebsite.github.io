#include <stdio.h>
int main (){
	int N;
	scanf("%d",&N);
	for (int T = 1 ; T <= N ; T++){
		int n;
		scanf("%d", &n);
		long long int a[n + 5];
		for (int i = 0 ; i < n ; i++){
			scanf("%lld", &a[i]);
		}
		long long int min = 0, jumlah[n] = {0};
		for (int i = 0 ; i < n - 1 ; i++){
			jumlah[i] = a[i + 1] - a[i];
			if (min <= jumlah[i]){
				min = jumlah[i];
			}
		}
		long long int temp = min , c = 0;
		printf("Case #%d: ", T);
		for (int i = 0 ; i < n - 1 ; i++){
			while (jumlah[i] <= min){
				min -= jumlah[i];
				i++;
			}
			i--;
			c++;
			min = temp;
		}
		printf("%lld %lld\n", min ,c);
	}
	return 0;
}
