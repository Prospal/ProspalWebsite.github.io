#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   int z;
   char x[9][n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<9;j++){
        	z = 9-a[i]; 
           if(j<z)
           {
               x[j][i]='.';
           }
           else{
               x[j][i]='#';
           }
       }
   }
   for(int i=0;i<9;i++)
   {
       for(int j=0;j<n;j++){
           printf("%c",x[i][j]);
       }
       printf("\n");
   }
    return 0;
}
