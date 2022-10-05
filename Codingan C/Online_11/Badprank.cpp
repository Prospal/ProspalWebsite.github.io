#include <stdio.h>
#include<string.h>
int main (){
	int tes,n;
	FILE *p;
	char a[1005];
	
	p = fopen("testdata.in","r");
	fscanf(p,"%d\n",&tes);
	for(int i=0;i<tes;i++){
		fscanf(p,"%d\n",&n);
		fscanf(p,"%[^\n]\n",a);
		for(int j=0;j<strlen(a);j++){
			if(a[j]=='0'){
				a[j]='O';
			}if(a[j]=='1'){
				a[j]='I';
			}if(a[j]=='3'){
				a[j]='E';
			}if(a[j]=='4'){
				a[j]='A';
			}if(a[j]=='5'){
				a[j]='S';
			}if(a[j]=='6'){
				a[j]='G';
			}if(a[j]=='7'){
				a[j]='T';
			}if(a[j]=='8'){
				a[j]='B';
			}
		}
		for(int j=0;j<strlen(a);j++){
			if(a[j]>='A'&& a[j]<='Z'){
				a[j]=a[j]-n;
				if(a[j]<'A'){
					a[j]=a[j]+26;
				}
			}
		}
		printf("Case #%d: %s\n",i+1,a);
	}
	fclose(p);
	return 0;
}
