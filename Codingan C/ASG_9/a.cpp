#include <stdio.h>
int main() 
{
	int tes,j,z,size;
	int sum = 0;
	scanf("%d",&tes);
	
	for(j = 1;j<=tes;j++){
	scanf("%d", &z);
	if (z >= 50) {
		size = z / 50;
		sum += size;
		z -= (size * 50);
	}if (z >= 10) {
		size = z / 10;
		sum += size;
		z -= (size * 10);
	}if (z >= 5) {
		size = z / 5;
		sum += size;
		z -= (size * 5);
	}if (z >= 2) {
		size = z / 2;
		sum += size;
		z -= (size * 2);
	}if (z >= 1) {
		size = z / 1;
		sum += size;
		z -= (size * 1);
	}
	printf("Case #%d: %d\n", j,sum);
	sum = 0;
	}
	return 0;
}
