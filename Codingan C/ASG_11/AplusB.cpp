#include <stdio.h>
#include<string.h>
int main (){
	int x,z,hasil;
	FILE *p;
	p = fopen("testdata.in","r");
	fscanf(p,"%d %d",&x,&z);
	hasil = x+z;
	printf("%d\n",hasil);
	fclose(p);
	return 0;
}
