#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a[t];
    int index = 0;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        a[index++] = pow(n, k);
    }
    for (int i = 0; i < t; i++)
    {
        printf("Case #%d: %d\n", (i + 1), a[i]);
    }
}
