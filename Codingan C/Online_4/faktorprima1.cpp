#include<stdio.h>
#include<math.h>

int main(){
  int a;
  scanf("%d", &a);  
  long long int b;
  for(int x=1; x<=a; x++){
  scanf("%lld", &b);
  int count=0;
  int c=1;
  printf("Case #%d: ", x);
  while(b%2==0){
  b=b/2;
  count++;
 }
 	if(count>0){
  	 printf("%lld ^ %lld", 2, count);
  	 c=0;
  }
 for(int y=3; y<=sqrt(b); y=y+2){
 	count=0;
  while(b%y==0){
  	b=b/y;
  	count++;
  }
  	if(c==0 && count>0){
    printf(" * ");
}
	if(count>0){
    printf("%lld ^ %lld", y, count);
    c=0;
}
}
	if(b>2){
	if(c==0){
	 printf(" * ");
	}
	printf("%lld ^ %lld", b,1);
	}
    printf("\n");
}
	return 0;
}
