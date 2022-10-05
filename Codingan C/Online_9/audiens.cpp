#include <stdio.h>
int main(){
	int t,a,max;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&a);
		int b1[a];
		int b2[a];
		max=0;
		for(int j=0;j<a;j++){
			scanf("%d",&b1[j]);
		}
		for(int j=0;j<a;j++){
			scanf("%d",&b2[j]);
		}
		for(int k = 0; k < a; k++) {
            int TEMP = b2[0], j, tm = 0;
            for(j = 0; j < a - 1; j++) {
            	b2[j] = b2[j + 1];
            }
            b2[j] = TEMP;
            for(j = 0; j < a; j++) {
                if(b1[j] < b2[j]){
                    tm += 1;
                }
            }
            if(tm > max) {
                max = tm;
            }
        }
        printf("Case #%d: %d\n", i + 1, max + a);
    }
	return 0;
}
