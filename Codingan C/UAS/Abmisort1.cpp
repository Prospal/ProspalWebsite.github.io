#include<stdio.h>
#include<string.h>
 
struct person {
    int id;
    char name[55];
    int feet;
    int inch;
    double cm;
};
 
void merge(struct person data[], int left, int med, int r, int n){
    int x1 = med-left+1;
    int x2 = r-med;
    struct person left_array[x1];
    struct person right_array[x2];
    for(int i=0;i<x1;i++)
	{
        left_array[i]=data[left+i];
    }
    for(int j=0;j<x2;j++)
	{
        right_array[j]=data[med+1+j];
    }
    int k=0, l=0, m=left;
    if(n==0)
	{
        while(k<x1 && l<x2 )
		{
            if(left_array[k].id <= right_array[l].id)
			{
                data[m] = left_array[k];
                k++;
            }
			else
			{
                data[m] = right_array[l];
                l++;
            }
            m++;
        }
    }
	else
	{
        while(k<x1 && l<x2) 
		{
            if(left_array[k].cm >= right_array[l].cm )
			{
                data[m] = left_array[k];
                k++;
            }
			else
			{
                data[m] = right_array[l];
                l++;
            }
            m++;
        }
    }
    while(k<x1)
	{
        data[m] = left_array[k];
        m++;
        k++;
    }
    while ( l < x2 )
	{
        data[m] = right_array[l];
        m++;
        l++;
    }
}
 
void mergesort(struct person data[], int left, int right, int n)
{
    if(left >= right ){
        return;
    }
    int middle = left + (right - left)/2;
    mergesort(data, left, middle, n);
    mergesort(data, middle+1, right, n);
    merge(data, left, middle, right, n);
}
 
int main(){
    int tes;
    scanf("%d", &tes);
    getchar();
    struct person dt[tes];
    for ( int i = 0 ; i < tes ; i++ ){
        scanf("%d,%[^,],%d %d", &dt[i].id, dt[i].name, &dt[i].feet, &dt[i].inch );
        getchar();
        dt[i].cm = ((double) dt[i].feet * 12 * 2.54 ) + ((double) dt[i].inch * 2.54);
    }
    mergesort(dt, 0, tes-1, 0);
    mergesort(dt, 0, tes-1, 1);
    int tc;
    scanf("%d", &tc);
    getchar();
    for ( int i = 1 ; i <= tc ; i++ ){
        int query;
        scanf("%d", &query);
        getchar();
        printf("Q%d:\n", i);
        int key = 0;
        for(int j = 0 ; j < tes ; j++){
            if(dt[j].cm <= query ){
                printf("%d %s %.2lf\n", dt[j].id, dt[j].name, dt[j].cm);
                key++;
            }
        }
        if(key == 0){
            printf("-1\n");
        }
    }
    return 0;
}
