#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
int number;
int group_num;
char group_member[10][10];
}group;

typedef struct{
int n;
char name[10];
}sample;

/*int stringTodigit(char x[])
{
char c='a';
while(x!=' ')
{
x=names[i][j];
j++;
}

}*/

int main()
{
int T,N;
scanf("%d",&T);
scanf("%d",&N);
N++;
char names[N][30];
for(int i=0;i<N;i++)
{
gets(names[i]);
}
printf("Case #%d\n",T);
int arr[N];
char nam[N][10];
for(int i=1;i<N;i++)
{
int j=0;
char x='a';
while(x!=' ')
{
x=names[i][j];
j++;
}
for(int k=0;k<j-1;k++)
{
nam[i][k]=names[i][k];
}
arr[i]=names[i][j]-'0';
nam[i][j]='\0';

}
sample sam[N];
group gr[N];
for(int i=1;i<N;i++)
{
sam[i].n=arr[i];
strcpy(sam[i].name,nam[i]);
gr[i].group_num=0;
gr[i].number=0;
}
int flag=0,g=0;
for(int i=1;i<N;i++)
{
int x=arr[i];
for(int j=1;j<N;j++)
{
if(gr[j].group_num==x)
flag=1;
}
if(flag==0)
{
gr[g].group_num=x;
g++;
}
}
int number_groups=g;
for(int i=1;i<number_groups;i++)
{
int x=gr[i].group_num,j=0;
for(int k=1;k<N;k++)
{
if(sam[k].n==x)
{
gr[i].number++;
strcpy(gr[i].group_member[gr[i].number],sam[i].name);
}
}
}
for(int i=1;i<number_groups;i++)
{
printf("Group %d(%d)\n",gr[i].group_num,gr[i].number);
for(int j=1;j<gr[i].number;j++)
{
printf("%s\n",gr[i].group_member[j]);
}

}
return 0;
}
