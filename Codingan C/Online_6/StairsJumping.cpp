#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,tng,d=0,i,count=0,count1=0;
    int result[10],result1[10],v[10];
    scanf("%d",&N);
    while(N!= 0 ) 
    {
        scanf ("%d",&tng);
	    for(i=0; i < tng; i++)
        {
            fscanf(stdin, "%d", &v[i]); 
        }
     	d= v[1]-v[0];
     for (i=1;i<tng-1;i++)
    {
       
         if (d <= v[i+1] - v[i])
        {
            d = v[i+1] - v[i];
        }
     }
    i=0;
    if (d==1) 
    {
        result[count1]=d;  
        result1[count1]=tng-1;
        count1++;
        N--;
    }
    else
    {
    while (i < tng) 
    {
         if (v[i+d] - v[i] <= d)
        {
            count++;
            i=i+d;
        }
         else if (v[i+d] - v[i] > d)
        {
             if (v[i+d-1] - v[i] <= d)
           {
                 count++;
                 i=i+d-1;
           }
    	}
    }
    result[count1]=d;  
    result1[count1]=count;
    count1++;
    count=0;
    d=0;
    N--;
    }
}    
	for (i=0;i<count1;i++)
    {
    printf("\nCase #%d : %d %d",i+1,result[i],result1[i]); 
	}
	

		
  
    return 0;
}
