#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    int a[t];
    int A = 0;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d", &n);
        int buy = 0;
        int sell = 0;
        for (int j = 0; j < n; j++)
        {
            int tipe, nomor;
            scanf("%d%d", &tipe, &nomor);
            if (tipe == 0)
                buy += nomor;
            if (tipe == 1)
                sell += nomor;
        }
        a[A++] = buy - sell;
    }
    for (int i = 0; i < t; i++)
    {
        printf("Case #%d: %d\n", (i + 1), a[i]);
    }
	return 0;
}

