#include <stdio.h>
int main (){
	int x,t,hasil;
	int jumlah=0;
	scanf("%d %d",&x,&t);
	int no[x + 1], z[t], a[t], temp[x + 1];
	for (int i = 1 ; i <= x ; i++){
		if (i == 1){
			scanf("%d",&no[i]);
			temp[i] = jumlah;
		}else if (i % 2 == 0){
			scanf("%d",&no[i]);
			temp[i + 1] = jumlah + no[i];
			temp[i] = jumlah + no[i];
			jumlah = jumlah + no[i];
		}else {
			scanf("%d", &no[i]);
		}
	}
	for (int i = 0 ; i < t ; i++){
		scanf("%d %d",&z[i],&a[i]);
		if (z[i]%2 == 0){
			z[i]--;
		}
		hasil = temp[a[i]] - temp[z[i]];
		printf("%d\n", hasil);
	}
	return 0;
}
