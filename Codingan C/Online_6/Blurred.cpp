#include <stdio.h>
int main()
{
    long long c,d,p,v;
    long long wep= 0,wx = 0,z = 0;
    scanf("%lld",&c);
    for(int i=0;i<c;i++)
        {
        scanf("%lld %lld",&d,&p);
        long long tes[110];
        long long po=0,s=0,u=1;
            for(int k = 1 ; k <= 64 ; k++)
                {
                po=s+u;
                u=s;
                s=po;
                tes[k]=po;
            }
            for(int j = d ; j <= p ; j++)
                {
                v=tes[j];
                while(v!=0)
                {
                    wep=v%10;
                    wx+=wep;
                    v/=10;
                }
                z+=wx;
            }
           printf("Case #%d: %lld\n",i+1,wx);
           wx=0;
        }
        
    return 0;
}
