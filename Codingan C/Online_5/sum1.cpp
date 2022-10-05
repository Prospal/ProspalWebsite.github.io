#include<stdio.h>
int main()
{
   int T,i,s=0;
   scanf("%d",&T);
   int output[T][100]={0};
   int size[T];
   i=0;
   while(i<T)
   {
       int X;
       scanf("%d",&X);
       size[i]=X;
       int input[X][X];
       for(int a=0;a<X;a++)
       {
           for(int b=0;b<X;b++)
           {
               scanf("%d",&input[a][b]);
           }
   		}
       for(int a=0;a<X;a++)
       {
           for(int b=0;b<X;b++)
           {
               output[i][a]+=input[b][a];
           }
       }
       i++;
   }
   for(i=0;i<T;i++)
   {
       printf("Case #%d: ",i+1);
       for(int j=0;j<size[i];j++)
       {
           printf("%d ",output[i][j]);
           s*=output[i][j];
           printf("%d",s);
       }
       s=0;
       printf("\n");
   }
   return 0;
}
