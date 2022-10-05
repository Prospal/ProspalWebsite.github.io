#include<stdio.h>

int main(){
    int l, b;
    scanf("%d %d", &l, &b);
    int chess[400][400];
    l++;
    for(int i=0; i<b; i++){
      int x, y;
      scanf("%d %d", &x, &y); //enemy locations
      chess[x][y]=1;
    }
    int z; 
    scanf("%d", &z);
    for(int j=0; j<z; j++){
       long int m, n;
       long int Knight=0, bishop=0, rook=0;
       scanf("%ld %ld", &m, &n); // ally locations
      
       long int f=0, g=0, h=m, i=n;
     if(chess[m+1][n-2]==1)Knight++;
        if(chess[m+1][n+2]==1)Knight++;
        if(chess[m-1][n-2]==1)Knight++;
        if(chess[m-1][n+2]==1)Knight++;
        if(chess[m-2][n+1]==1)Knight++;
        if(chess[m-2][n-1]==1)Knight++;
        if(chess[m+2][n+1]==1)Knight++; 
        if(chess[m+2][n-1]==1)Knight++;
        
        while(h>0 && i<l){
         if(chess[h][i]==1){
            bishop++;
            break;
         }
         h--;
         i++;
       }
       h=m, i=n;
       while(h<l && i<l){
         if(chess[h][i]==1){
            bishop++;
            break;
         }
         h++;
         i++;
       }
       h=m, i=n;
       while(h>0 && i>0){
         if(chess[h][i]==1){
            bishop++;
            break;
         }
         h--;
         i--;
       }
       h=m, i=n;
       while(h<l && i>0){
         if(chess[h][i]==1){
            bishop++;
            break;
         }
         h++;
         i--;
       }

        h=m; i=n;
      while(h<l){
         if(chess[h][i] == 1){
           rook++;
           break;
         }
         h++;
       }

       h=m; i=n;
       while(i<l){
         if(chess[h][i] == 1){
         rook++;
           break;
         }
         i++;
       }

       h=m; i=n;
       while(h>0){
         if(chess[h][i] == 1){
           rook++;
           break;
         }
         h--;
       }

       h=m; i=n;
       while(i>0){
         if(chess[h][i] == 1){
           rook++;
           break;
         }
         i--;
       }
      
       if(rook>bishop && rook>Knight){
         printf("3\n");
       }
    else if(bishop>Knight){
         printf("2\n");
       }
    else{
         printf("1\n");
       }
    }
    return 0;
}
