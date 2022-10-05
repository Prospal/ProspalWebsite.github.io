#include <stdio.h>

int main () {
    
    int a, d, max = 0, sum = 0;
    scanf("%d", &a);
        for (int i=0;i<a;i++)
 {
        scanf("%d", &d);
        int z[d+10] = {0};
        for (int j=0;j<d;j++)
  {
            int A[d+10], B[d+10];
            scanf("%d %d", &A[j], &B[j]);
            if(j>0)
   {
                if(A[j] < max)
    {
                    z[j]=1;
                    z[j-1]=1;
                }
                else if(A[j] > max) 
    {
                 z[j]=0;
       }
            }
   else 
   {
                max = B[j];
                z[j]=0;
            }
            if(B[j] > max)
   {
                max = B[j];
            }
        }
        for (int j=0;j<d;j++)
  {
            if(z[j]==0)
   {
                sum++;
            }
        }
        printf("Case #%d: %d\n", i+1, sum);
        sum =0;
    }
    
    
    return 0;
}
