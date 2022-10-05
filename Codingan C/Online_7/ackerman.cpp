#include<stdio.h>
int tes(int a, int b);
 
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("result: %d\n",tes(a,b));
    
    return 0;
}
 
int tes(int a, int b)
{
    if(a==0)
        return b+1;
    else if(b==0)
        return tes(a-1,1);
    else
        return tes(a-1,tes(a,b-1));
}

