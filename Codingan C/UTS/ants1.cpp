#include <math.h>
#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int count=0;
	int a[t];
	int s,r,b,sr,sb;
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&s,&r,&b);
		while (r+b<=s){
			count++;
			sr=r;
			sb=b;
			if(count%4==0){
				r -=floor((1*r)/3);
			}else{
					r*=2;
			}if(count%3==0){
				b -= floor((4*b)/5);
			}else{
				b*= 3;
			}
		}
		count--;
//		printf("Case #%d: %d ",i+1,count);
		if(sr>sb){
			printf("Case #%d: %d Red %d\n",i+1,count,sr-sb);
		}
		if(sb>sr){
			printf("Case #%d: %d Black %d\n",i+1,count,sb-sr);
		}
		if(sb==sr){
			printf("Case #%d: %d None 0\n",i+1,count);
		}
		count=0;
		}
		
	
	return 0;
}
