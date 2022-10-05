#include <math.h>
#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	int s,r,b;
	int rs,bs;
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&s,&r,&b);
		if(r+b==s){
			printf("Case #%d: 0 None 0",i+1);
		}else{
			for(int j=0;j<1000;j++){
				if(j%4==0){
					rs= r - (floor (r*(1/3)));
				}else if(j%4!=0){
					rs = r*2;
				}else{
				}
			}
			for(int x=0; ;x++){
				if(x%3==0){
					bs = b - (floor(b*(4/5)));
				}else{
					bs = b*3;
				}
			}
		}
	}
	
}
