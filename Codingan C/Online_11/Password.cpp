#include<stdio.h>
#include<string.h>

struct password{
	char pass[1005];
};

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int tc;
	fscanf(fp, "%d", &tc);
	int n;
	int passLen[1005];
	struct password p[1005];
	for(int i=0; i<tc; i++){
		fscanf(fp, "%d\n", &n);
		for(int j=0; j<n; j++){
			fscanf(fp, "%s\n", p[j].pass);
			passLen[j] = strlen(p[j].pass);
		}
		printf("Case #%d: ", i+1);
		int temp=0;
		for(int k=0; k<passLen[0]; k++){
			for(int l=1; l<n; l++){
				if(p[0].pass[k] != p[l].pass[k]) {
					temp=1;
				}
			}
			if(temp==0){
				printf("%c", p[0].pass[k]);
			}
		}
		temp=0;
		int ctr=0;
		for(int k=0; k<passLen[0]; k++){
			int x,y;
			x = passLen[0] - k - 1;
			for(int l=1; l<n; l++){
				y = passLen[l] - k - 1;
				if(p[0].pass[x] != p[l].pass[y]) {
					temp= 1;
				}
			}
			if(temp==0){
				ctr++;
			}
		}
		for(int m=passLen[0]-ctr; m<passLen[0]; m++){
			printf("%c", p[0].pass[m]);
		}
		printf("\n");
	}
	fclose(fp);
	
	return 0;
}
