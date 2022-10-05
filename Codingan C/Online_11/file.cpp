#include <stdio.h>
int main(){
	int tes,n,i;
	FILE *p;
	char a[55],b[55],c[105];
	p=fopen("testdata.txt","r");
	fscanf(p,"%d\n",&tes);
	for(i=0;i<tes;i++){
		fscanf(p,"%[^#]#%[^#]\n",a[i],b[i]);
	}
	fscanf(p,"%d\n",&n);
	for(int j=0;j<n;j++){
		fscanf(p,"%[^\n]",c);
		if(c=a[i]){
			c=b[i];
			printf("%s",c);
		}
	}
	
	return 0;
}
