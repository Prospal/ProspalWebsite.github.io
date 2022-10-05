#include <stdio.h>
#include <string.h>

struct data {
char ab [5];
char bc[30];
int cd;
double de;
};

void merge (struct data student[], int left, int mid, int right){
	int leftsize = mid-left +1;
	int rightsize = right- mid;
	struct data leftarray [leftsize], rightarray[rightsize];
	for (int i=0; i< leftsize; i++){
	leftarray[i]= student [left+i];
	}
	for (int i=0; i< rightsize; i++){
	rightarray[i]= student[mid+1+i];
	}
	int leftidx=0, rightidx=0;
	int arridx= left;
	while (leftidx< leftsize && rightidx<rightsize){
		if(strcmp(leftarray[leftidx].ab, rightarray[rightidx].ab)<0){
		student[arridx]= leftarray[leftidx];
		leftidx++;
	}
	else{
	student [arridx]= rightarray[rightidx];
	rightidx++;
	}
	arridx++;
	}
	while(leftidx<leftsize){
	student [arridx]= leftarray[leftidx];
	leftidx++;
	arridx++;
	}
	while (rightidx<rightsize){
	student [arridx]= rightarray[rightidx];
	rightidx++;
	arridx++;
	}
}

void mergesort (struct data student[], int left, int right){
	if (left>=right){
	return;
	}
	int mid = left + (right - left)/2;
	mergesort(student, left, mid);
	mergesort(student, mid+1, right);
	merge(student, left, mid, right);
}

int binarysearch (struct data student [], int left, int right, char target[]){
	while (left<=right){
		int mid = (left +right)/2;
		if (strcmp(student[mid].ab , target)<0){
		left = mid+1;
		}
		else if(strcmp(student[mid].ab ,target)>0){
		right = mid-1;
		}
		else {
		return mid;
		}
	}
return -1;
}

int main (){
	int tes,m;
	scanf ("%d", &tes);
	struct data dt[tes];
	for (int x=0; x<tes; x++){
	getchar ();
	scanf("%[^,],%[^,],%d,%lf", &dt[x].ab, &dt[x].bc, &dt[x].cd, &dt[x].de);
	}
	mergesort (dt, 0, tes-1);
	scanf ("%d", &m); getchar ();

	for (int i=1; i<=m; i++){
		char x[5];
		scanf ("%s", &x);
		int count = binarysearch (dt, 0, tes-1, x);
		if (count >=0){
		printf ("%s %d %.2lf\n", dt[count].bc, dt[count].cd, dt[count].de);
		}
		else {
		printf ("%d\n", count);
		}
	}

	return 0;
}
