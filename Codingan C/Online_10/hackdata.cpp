#include <stdio.h>
struct data {
  char nama[50];
  int sal[5];
};

int main() {
	int t;
	scanf("%d", &t);
	for(int z = 1; z <= t; z++){
    	int name, manipulasi;
    	scanf("%d %d", &name, &manipulasi);
    	struct data gaji[name], temp;
    	int acak[manipulasi], a[manipulasi], b[manipulasi];
    	for(int i = 0; i < name; i++) {
    		scanf("%s %d %d %d", &gaji[i].nama,  &gaji[i].sal[0],  &gaji[i].sal[1],  &gaji[i].sal[2]);
    	}
    	for(int i = manipulasi - 1; i >= 0; i--) {
    		scanf("%d %d %d", &acak[i], &a[i], &b[i]);
    	}
    	for(int i = 0; i < manipulasi; i++) {
    		if(acak[i] == 1){
        		int lst1 = b[i] - 1;
        		for(int j = a[i] - 1; j <= b[i] - 1; j++, lst1--){
        			if(lst1 <= j){
        				break;
          			}else{
            			temp.sal[0] = gaji[j].sal[0];
            			temp.sal[1] = gaji[j].sal[1];
            			temp.sal[2] = gaji[j].sal[2];
            			gaji[j].sal[0] = gaji[lst1].sal[0];
            			gaji[j].sal[1] = gaji[lst1].sal[1];
            			gaji[j].sal[2] = gaji[lst1].sal[2];
            			gaji[lst1].sal[0] = temp.sal[0];
            			gaji[lst1].sal[1] = temp.sal[1];
            			gaji[lst1].sal[2] = temp.sal[2];
        			}
        		} 
      		}else if(acak[i] == 2) {
        		for(int j = a[i] - 1; j <= b[i] - 1; j++) {
        			int temp = gaji[j].sal[3 - 1];
        			for(int x = 3 - 1; x > 0; x--) {
            			gaji[j].sal[x] = gaji[j].sal[x - 1];
    				}
    			gaji[j].sal[0] = temp;
        		}
      		}
    	}
    	printf("Case #%d:\n", z);
    	for(int i = 0; i < name; i++) {
    		printf("%s %d\n",gaji[i].nama,gaji[i].sal[2]);
    	}
	}
	return 0;
}
