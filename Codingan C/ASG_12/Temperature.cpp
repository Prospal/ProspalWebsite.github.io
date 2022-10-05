#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in", "r");
	double derajat[105];
	char city[105][1005];
	char metrik[105][3];
	int tes=0;
	while(!feof(fp)){
		fscanf(fp, "%[^#]#%lf#%s\n", city[tes], &derajat[tes], metrik[tes]);
		tes++;
	}
	fclose(fp);
	double temp1, temp2;
	char tempCity[1005];
	char tempderajat[3];

	double suhuderajat[105];
	
	for(int z=0; z<tes; z++){
		if(strcmp(metrik[z], "F")==0){
			suhuderajat[z]=(derajat[z]-32)*5/9;
		} else{
			suhuderajat[z]=derajat[z];
		}
	}
	for(int i=0; i<tes; i++){
		for(int j=0; j<tes; j++){
			if(suhuderajat[i]<suhuderajat[j]){
				temp1 = suhuderajat[i];
				suhuderajat[i] = suhuderajat[j];
				suhuderajat[j] = temp1;
				temp2 = derajat[i];
				derajat[i] = derajat[j];
				derajat[j] = temp2;
				strcpy(tempCity, city[i]);
				strcpy(city[i], city[j]);
				strcpy(city[j], tempCity);
				strcpy(tempderajat, metrik[i]);
				strcpy(metrik[i], metrik[j]);
				strcpy(metrik[j], tempderajat);
			} 
			if(suhuderajat[i]==suhuderajat[j]){
				
				strcpy(tempCity, city[i]);
				strcpy(city[i], city[j]);
				strcpy(city[j], tempCity);

				strcpy(tempderajat, metrik[i]);
				strcpy(metrik[i], metrik[j]);
				strcpy(metrik[j], tempderajat);
				temp2 = derajat[i];
				derajat[i] = derajat[j];
				derajat[j] = temp2;
			}
		}
	}
	for(int z=0; z<tes; z++){
		printf("%s is %.2lf%s\n", city[z], derajat[z], metrik[z]);
	}
	
	return 0;
}
