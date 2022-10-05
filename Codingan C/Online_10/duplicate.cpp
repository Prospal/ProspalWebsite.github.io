#include <stdio.h>
#include <string.h>
struct name{
	char nama[105];
};
int main (){
	int tes,count;
	scanf("%d",&tes);
	int f[tes];
	struct name a[tes];
	for(int i=0;i<tes;i++){
		scanf("%s",a[i].nama);
	}
	for(int i=0;i<tes;i++){
		count=0;
		for(int j=0;j<tes;j++){
			if(strcmp(a[i].nama,a[j].nama)==0){
				count++;
				f[j]=count;
			}
		}
	}
//	count=0;
//	for(int i=0;i<tes;i++){
//		
//		if(f[i]==2){
//			count++;
//		}
//	}
	printf("You have %d duplicate name(s).\n",count);
	return 0;
}
