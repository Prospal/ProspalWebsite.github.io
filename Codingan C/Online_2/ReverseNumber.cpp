#include<stdio.h>  
int main()    
{   int n,num1,num2,num3,reverse;
	scanf("-%d-",&n);       
	num1 = n/100;
    num2 = (n % 100) / 10;
    num3 = n%10;
	printf("-%d%d%d-\n",num3,num2,num1); 
return 0;  
}   
