#include <stdio.h>
int main(){
	int x;
	int c,d;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		scanf("%d %d",&c,&d);
		int hasil=0;
		int m=1;
		int z;
		while (c || d){
		z= (c % 10) + (d% 10);
    	z %= 10;
        hasil = (z* m) + hasil;
        c /= 10;
        d/= 10;
        m*= 10;
    	}
        printf("Case #%d: %d\n",(i+1),hasil);
	}	
	return 0;
}
