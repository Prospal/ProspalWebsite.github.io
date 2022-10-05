#include<stdio.h>
#include<string.h>

int main() {
	FILE *p;
	p = fopen("testdata.in", "r");
    int tes;
    fscanf(p,"%d\n",&tes); 
    
    char singkat[tes][55];
    char asli[tes][55];

    for(int i=0; i<tes; i++) {
        fscanf(p, "%[^#]#%[^\n]\n", singkat[i], asli[i]);
    }
	int n;
    fscanf(p,"%d\n",&n);
    for(int i=1; i<=n; i++){
        char str[105];
        fscanf(p, "%s", str);
		printf("Case #%d: ",i);
        int found = 0;
        for(int j=0; j<=tes; j++){
            if(strcmp(str, singkat[j]) == 0){
                printf("%s",asli[j]);
                found = 1;
                break;
                found=0;
			}if(j==tes && found == 0){
				printf("N/A");
			}
            
        }
        printf("\n");
	}
	
		
	fclose(p);

	return 0;   
}
