#include<stdio.h>

int main(){
 int a,b;
 int count=0;
 int max=0;
     scanf("%d", &a);
     for(int i=1;i<=a;i++){
      scanf("%d",&b);
      int arr[200005]={0};
      for(int j=0;j<b;j++){
       scanf("%d", &count);
      arr[count-1]++;
  }
          max=0;
          printf("Case #%d: ",i);
           for(int k=0;k<200005;k++){
        if(arr[k]>max){
        max=arr[k];
   } 
 }
                printf("%d\n", max);
                int flag=0;
                for(int p=0;p<200005;p++){
                  if (max==arr[p]&&flag==0){
                   printf("%d", p+1);
                flag=1;        
   }
                   else if(max==arr[p]){
                       printf(" %d",p+1);
                   }
 }
    printf("\n");
}
     return 0;
} 

