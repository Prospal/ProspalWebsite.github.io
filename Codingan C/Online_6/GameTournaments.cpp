#include <stdio.h>
#include <math.h>
int main() {
    long long a;
	long long result;
    scanf("%lld", &a);
    result = pow(2, a);
    printf("%lld\n",result-1);
    return 0;
}
