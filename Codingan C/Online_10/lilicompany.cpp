#include <stdio.h>
#include <string.h>
int main()
{
	int t,i=0,j,k,l,fg=0,index=0,on1,on2,p,temp;
	char nama[101][101],tes[101],tempc[101],isi[101];
	
	scanf("%d",&t);
	for (l = 0 ; l < 100;l++)
	{
		strcpy(nama[l],"&"); 
	}
	
	while (i < t) 
	{
		scanf("%d",&p);getchar();
		if (p == 1)
		{
			scanf("%[^\n]",tes);getchar(); 
			scanf("%[^\n]",isi);getchar();
			scanf("%[^\n]",isi);getchar();
			for (j = 0 ; j < t; j++)
			{
				if (strcmp(nama[j],tes)==0) 
				{
					fg = 1;
					break;
				}
			}
			
			for (k = 0 ; k < t;k++)
			{
				if (strcmp(nama[k],"&")==0)break; 
			}
			
			if (fg != 1)
			{
				strcpy(nama[k],tes);
			}
			fg=0;
		}
		
		if (p == 2)
		{
			scanf("%d %d",&on1,&on2);getchar();
			if(strcmp(nama[on1-1], "&")==0 || strcmp(nama[on1-1], "*")==0 
			|| strcmp(nama[on2-1], "&")==0 || strcmp(nama[on2-1], "*")==0) continue;
			strcpy(tempc,nama[on1-1]);
			strcpy(nama[on1-1],nama[on2-1]);
			strcpy(nama[on2-1],tempc);
		}
		
		if (p == 3)
		{
			scanf("%d",&on1);getchar();
			strcpy(nama[on1-1],"&");
		}
		
		if (p == 4)
		{
			scanf("%d",&on1);getchar();
			strcpy(nama[on1-1],"*");
		}
		i++;
	}
	for (int m = 0;m <t;m++)
	{
		if (strcmp(nama[m],"*")==0|| strcmp(nama[m],"&")==0)continue;
		printf("%s\n",nama[m]);
	}
	return 0;
}
