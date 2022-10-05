#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
	int tc;
	fscanf(fp, "%d\n", &tc);
	char words[103];
	for(int i=0; i<tc; i++){
		fscanf(fp, "%[^\n]\n", &words);
		char one[103], two[103];
		int tc2;
		fscanf(fp,"%d\n", &tc2);
		for(int j=0; j<tc2; j++){
			fscanf(fp, "%c %c\n", &one[j], &two[j]);
		}
		for(int j=0; j<tc2; j++){
			for(int k=j+1; k<tc2; k++){
				if(one[j]==one[k]) one[k]='0';
			}
		}
		for(int j=0; j<tc2; j++){
			for(int k=0; k<strlen(words); k++){
				if(words[k]==one[j] && one[j]!='0') words[k]=two[j];
			}
		}
		char flag[103]={0};
		int ctr[103]={0};
		int idx=0;
		for(int a=65; a<=90; a++){
			for(int b=0; b<strlen(words); b++){
				if(words[b]==a){
					flag[idx]=a;
					ctr[idx]++;
				}
			}
			idx++;
		}
		for(int c=0; c<=26; c++){
			if(ctr[c]!=0) printf("%c %d\n", flag[c], ctr[c]);
		}
	}
	fclose(fp);
	return 0;
}
