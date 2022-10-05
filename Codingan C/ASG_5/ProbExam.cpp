#include<stdio.h>
#include<string.h>

int main(){
    
    int t;
    char str[100005];
    
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        int len, freq[125]={0}, ctr=0;
               scanf("%s", str);
        
               len=strlen(str);
               printf("Case #%d: ", i+1);
    
        for(int j=0; str[j]!='\0'; j++){
            freq[str[j]]++;
        }
        for(int j=0; j<125; j++){
               if(freq[j]>0){
            ctr++;
            }
        }
    
        if(ctr%2==0){
                printf("Yay\n");
        }
        else{
            printf("Ewwww\n");
        }
    }
    return 0;
}
