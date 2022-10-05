#include <stdio.h>
int main(){
	
    int A;
    scanf("%d",&A);
    int c,d;
    int odd=0,even=0;
    
    for(int i=1;i<=A;i++)
    {
        scanf("%d",&c);
        for(int j=0;j<c;j++)
        {
         scanf("%d",&d); 
    if(d % 2 == 0){even++;} 
    else if(d % 2 !=0){odd++;} 
         
	}
 printf("Odd group : %d integer(s).\n", odd);
 printf("Even group : %d integer(s).\n", even);
 printf("\n");
 odd=0,even=0;
}

    return 0;
}
