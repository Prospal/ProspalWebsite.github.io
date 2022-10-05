#include <stdio.h>
#include <string.h>

int main (){
int T, a = 0;
char str[105];
char str2[105] = {0};
scanf ("%d", &T);getchar();
for (int i = 1; i <= T; i++){
	scanf ("%[^\n]", str);getchar();
	printf ("Case #%d:", i);
	for (int j = 0; j < strlen(str) + 1; j++){
		if (str[j] == ' ' || str[j] == '\0'){
		printf (" ");
    	if (strlen(str2) <= 3){
		printf ("%s", str2);
    	}else{
    		printf ("%c", str2[0]);
    		for (int k = strlen(str2) - 2; k > 0; k--){
    			printf ("%c", str2[k]);
    		}
    		printf ("%c", str2[strlen(str2) - 1]);
    	}
    		a = 0;
    		memset (str2, 0, sizeof(str2));
		}
	else{
    	str2[a] = str[j];
    	a++;
		}
	}
	printf("\n");
	}
	return 0;
}
