#include <stdio.h>

int main (){
	
	int a,b;
	scanf("%d %d",&a,&b);
	int ab[200005];
	for(int i=0;i<a;i++){
		scanf("%d",&ab[i]);
	}
	int left=0,right=a-1,ans=-1;
	while(left<right){
		if(ab[left]+ab[right]<=b){
			if(ab[left]+ab[right] > ans){
				ans=ab[left]+ab[right];
			}
			left++;	
		}
		else{
			right--;
		}
	}
	printf("%d\n",ans);
	
	return 0;
}

