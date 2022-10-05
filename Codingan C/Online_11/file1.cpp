#include<stdio.h>
#include<string.h>

int main() {
	FILE *f;
	f = fopen("testdata.in", "r");
    int tes;
    fscanf(f,"%d\n",&tes); 
    
    char singkat[tes][55];
    char asli[tes][55];

    for(int i=0; i<tes; i++) {
        fscanf(f, "%[^#]#%s\n", singkat[i], asli[i]);
    }
    int n;
    fscanf(f,"%d\n",&n);
    for(int i=1; i<=n; i++){
        char str[105];
        fscanf(f, "%[^\n]\n", str);
		printf("Case #%d:\n",i);
        char* get = strtok(str," ");
        while(get != NULL){
            int found = 0;
            for(int j=0; j<tes; j++){
                if(strcmp(get, singkat[j]) == 0){
                    printf("%s",asli[j]);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
                printf("%s",get);
            get = strtok(NULL, " ");
            if(get != NULL)
                printf(" ");
        }
        printf("\n");
    }
    fclose(f);
    
    return 0;
}
