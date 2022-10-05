#include<stdio.h>
#include<string.h>

int main() {
	FILE *p;
	p = fopen("testdata.in", "r");
    int tes;
    fscanf(p,"%d\n",&tes); 
    
    int a[tes];
    char asli[tes][55];
    
    for(int i=0; i<tes; i++) {
        fscanf(p, "%d %s\n",&a[i], asli[i]);
    }
    
//    for(int i=0; i<tes; i++) {
//        printf("%d %s\n",a[i], asli[i]);
//    }

	int n;
    fscanf(p,"%d\n",&n);
    for(int i=1; i<=n; i++){
        int ay;
        fscanf(p, "%d", &ay);
		printf("Case #%d: ",i);
        int found = 0;
        for(int j=0; j<=tes; j++){
            if(ay == a[j]){
                printf("%s",asli[j]);
                found = 1;
                break;
			}if(j==tes && found == 0){
				printf("N/A");
			}
            
        }
        printf("\n");
	}
    
    fclose(p);
	return 0;
}
