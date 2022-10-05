#include <stdio.h>
int main() {
    int num,cnum, i,j=0,p=0;
    int numbers[100];
    int factors[100];
    int primenum[100];
    int flag1;
    printf("Enter Number of Cases: ");
    scanf("%d", &cnum);
if(cnum>=1 && cnum<=100)
 {
    printf("Enter any Interger values :") ;
    for(int a=0;a<cnum;a++)
    {
      scanf("%d", &numbers[a]);  
    }
    for(int b=0;b<cnum;b++)
    {
    num=numbers[b];
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            //printf("%d ", i);
            factors[j]=i;
            j++;
        }
    }
    for(int k=1;k<j;k++)
    {
        int n=factors[k];
        int flag=0;
        int m=n/2;    
        for(i=2;i<=m;i++)    
        {    
        if(n%i==0)    
        {    
        flag=1;    
        break;    
        }    
        }
        if(flag==0) 
        {
        primenum[p]=n;  
        p++;
        }
        
    }
    
    for(int l=0;l<p;l++)
    {
        flag1=0;
        for(int m=0;m<p;m++)
        {
           int res = primenum[l] * primenum[m];
           if(res==num)
           {
              // printf("%d",num);
               flag1=1;  
               break;
           }
        }
        
        if(flag1==1) 
        {
        int cas=b+1;
        printf("CASE #%d : YES \n",cas);
        break;
        }
        
    }
    if(flag1==0) 
        {
        int cas=b+1;
        printf("CASE #%d :NO \n",cas);
        }
    
        
    }
}

else
{
    printf("Enter Valid number of Cases");
}
}

