#include <stdio.h>

int main () {
	int tes;
	scanf("%d",&tes);	
	for (int i = 0 ;i<tes;i++) {
		
		int qst;
		scanf("%d",&qst);
		printf("Case #%d:\n",i+1);
		int a = 1;
		int b = qst;
		if (qst == 1) {
			printf("Sheet 1, front: Blank, 1\n");
			printf("Sheet 1, back: Blank, Blank\n");
			continue;
		}
		if (qst % 4 == 0) {
			for (int j = 0 ; j <qst/4;j++) {
				printf("Sheet %d, front: %d, %d\n",j+1,b,a);
				a++;
				b--;
				printf("Sheet %d, back: %d, %d\n",j+1,a,b);
				a++;
				b--;
			}
		} else {
			int hal = ((qst/4) + 1) * 4;
			for (int j = 0 ; j <(qst/4)+1;j++) {
				
				printf("Sheet %d, front: ",j+1);
				if (hal > b) {
					printf("Blank, %d\n",a);
					a++;
					hal--;
				} else {
						printf("%d, %d\n",b,a);
					a++;
					b--;
					hal--;
				}
				
					printf("Sheet %d, back: ",j+1);
				if (hal > b) {
					printf("%d, Blank\n",a);
					a++;
					hal--;
				} else {
						printf("%d, %d\n",a,b);
					a++;
					b--;
					hal--;
				}
			}
		}
}
	return 0;
}

