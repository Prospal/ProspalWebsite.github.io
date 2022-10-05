#include<stdio.h>
int main(){
	int a,z, hasil[100001],f[100001],mod=1000000009;
	f[1]=1;
	f[2]=1;
	scanf("%d",&a);
	for(int i = 3; i<=100000;i++){
		f[i]=(f[i-1]%mod + f[i-2]%mod)%mod;
	}
	hasil[1]=1;
	for (int i=2; i<= 100000;i++){
		hasil[i]=(hasil[i-1]+f[i])%mod;
	}
	for(int i=0;i<a;i++){
		scanf("%d",&z);
		printf("Case #%d: %d\n",i+1,hasil[z]);
	}
	return 0;
}

