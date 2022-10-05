#include<stdio.h>
int main (){
	int x;
	scanf("%d",&x);
	int a[x];
	int y;
	char z[105];
	for(int i;i<x;i++){
		scanf("%d %s",&y,&z);
		if(z[0]=='a'){
			printf("Case #%d: j'%s\n",(i+1),z);
		}
		else if(z[0]=='i'){
			printf("Case #%d: j'%s\n",(i+1),z);
		}
		else if(z[0]=='u'){
			printf("Case #%d: j'%s\n",(i+1),z);
		}
		else if(z[0]=='e'){
			printf("Case #%d: j'%s\n",(i+1),z);
		}
		else if(z[0]=='o'){
			printf("Case #%d: j'%s\n",(i+1),z);
		}
		else if(z[0]=='y'){
			printf("Case #%d: j'%s\n",(i+1),z);
		}
		else if(z[0]=='h'){
				if(z[1]=='a'){
				printf("Case #%d: j'%s\n",(i+1),z);
				}
				else if(z[1]=='i'){
				printf("Case #%d: j'%s\n",(i+1),z);
				}
				else if(z[1]=='u'){
				printf("Case #%d: j'%s\n",(i+1),z);
				}
				else if(z[1]=='e'){
				printf("Case #%d: j'%s\n",(i+1),z);
				}
				else if(z[1]=='o'){
				printf("Case #%d: j'%s\n",(i+1),z);
				}
				else if(z[1]=='y'){
				printf("Case #%d: j'%s\n",(i+1),z);
				}
				else{
				printf("Case #%d: je %s\n",(i+1),z);
			}
		}
		else{
			printf("Case #%d: je %s\n",(i+1),z);
		}
	}
	return 0;
}
