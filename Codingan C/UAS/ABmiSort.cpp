#include <stdio.h>
#include <string.h>

struct data {
	int id,hf,hi,cm1,cm2;
	char nama[21];
	double cm;
};


void merge (data a[],int awal,int mid,int akhir)
{
	int bl = mid-awal+1;
	int br = akhir -mid;
	data tempL[bl],tempR[br];
	int i,j,k;
	
	for ( i = 0 ; i < bl ;i++)
	{
		tempL[i]=a[awal+i];
	}
	
	for (i = 0 ; i < br;i++)
	{
		tempR[i]=a[mid+1+i];
	}
	
	
	i = 0;
	j = 0 ;
	k = awal;
	
	while (i < bl && j < br)
	{
		if (tempL[i].cm < tempR[j].cm ){
			a[k]=tempL[i];
			i++;
		}
		
		else if  (tempL[i].cm == tempR[j].cm ){
			if (tempL[i].id < tempR[j].id ){
				a[k]=tempR[j];
				j++;
			}
			else {
				a[k]=tempL[i];
				i++;
			}
		}
	
		else
		{
			a[k]=tempR[j];
			j++;
		}
		k++;
	}
	
	while (i < bl)
	{
		a[k]=tempL[i];
		i++;
		k++;
	}
	
	while (j < br)
	{
		a[k]=tempR[j];
		j++;
		k++;
	}
	
}

void sort(data a[],int awal,int akhir)
{
	if (awal<akhir)
	{
		int mid = awal + (akhir - awal)/2;
		sort (a,awal,mid);
		sort (a,mid+1,akhir);
		merge(a,awal,mid,akhir);
	}
}

int main(){
	int tc,m,x;
	struct data p[50001];
	scanf("%d",&tc);
	
	for (int i = 0 ; i < tc ; i++){
		scanf("%d,%[^,],%d %d",&p[i].id,&p[i].nama,&p[i].hf,&p[i].hi);

		double ting = (double)((p[i].hf *12 )+p[i].hi)*2.54;

		p[i].cm=ting;

	}
	sort(p,0,tc-1);

	scanf("%d",&m);
	int z = 0;
	data arr[tc+5];
	for (int j = 0 ; j < m;j++){
		scanf("%d",&x);
		printf("Q%d:\n",j+1);
		while (p[z].cm <=x){
			
			arr[z]=p[z];
		
			z++;
		}
		for (int l = z-1 ; l >=0 ; l--){
			printf("%d %s %.2lf\n",arr[l].id,arr[l].nama,arr[l].cm);
		}
		if (z==0)printf("-1\n");
		z=0;
		
	}
	return 0;
}
