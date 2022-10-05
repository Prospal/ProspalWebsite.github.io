#include <stdio.h>
#include <string.h>

int Var(char z[20], char za[8], int a, int b) {
    if((a == 0 && b == 0)|| b == 0){
        return 1;
    }
    else if (a == 0) {
        return 0;
    }
    else if(z [a-1] == za[b-1]){
        return Var(z, za, a-1, b-1)+ Var(z, za, a-1, b);
    }
    else{
        return Var(z, za, a-1, b);
    }
}

int main() {
    int t, e, f, d; 
    char z[20], za[8];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", z);
        scanf("%s", za);
        e = strlen(z);
        f = strlen(za);
        d = Var(z, za, e, f);
        printf("Case #%d: %d\n", i+1, d);
    }
    return 0;
}
