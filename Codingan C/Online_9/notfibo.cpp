#include<stdio.h> 
int a,b;
int fib(int n){
 
	if (n == 0){
    	return a; 
	}else if(n == 1){
		return b;
	}else {
		return fib(n-1) + fib(n-2); 		
	}

} 
  
int main () 
{ 

	scanf("%d %d",&a,&b);
	int n;
	scanf("%d",&n); 
	printf("%d\n", fib(n)); 
	getchar(); 
	return 0; 
} 

 
//#include<stdio.h> 
//int fib(int n) 
//{ 
//  int a,b, c, i; 
//  if( n == 0) 
//    return a; 
//  for (i = 2; i <= n; i++) 
//  { 
//    c = a + b; 
//    a = b; 
//    b = c; 
//  } 
//  return b; 
//} 
//  
//int main () 
//{ 
//	int a,b;
//	scanf("%d %d",&a,&b);
//	int n;
//	scanf("%d",&n); 
//	printf("%d\n", fib(n)); 
//	getchar(); 
//	return 0; 
//} 
